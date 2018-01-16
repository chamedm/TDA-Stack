/*
 * Stack.c
 *
 *  Created on: 28 mar. 2017
 *      Author: Chavez
 */
#include "Stack.h"
#include <stdlib.h>

struct strNode {
	Type data;
	Node prior;
};

struct strStack {
	struct strNode* top;
	int size;
};

Stack stack_create()
{
	Stack t = (Stack)malloc(1*sizeof(struct strStack));
	t->top = NULL;
	t->size = 0;
	return t;
}

int stack_size(Stack s)
{
	return s->size;
}

bool stack_isEmpty(Stack s)
{
	//return s->top == NULL;
	return s->size == 0;
}

Type stack_top(Stack s)
{
	if(s->top == NULL)
		return NULL;
	//else
	return s->top->data;
}

void stack_push(Stack s, Type d)
{
	Node n = (Node)malloc(sizeof(struct strNode));
	n->data = d;

	if(s->top == NULL)
		n->prior = NULL;
	else
		n->prior = s->top; //todo el bloque if/else se puede hacer con s�lo esta l�nea

	s->top = n;
	s->size++;
}

Type stack_pop(Stack s)
{
	if(s->top == NULL)
		return NULL;

	Type t = s->top->data;
	Node prior = s->top->prior;

	free(s->top);
	s->top = prior;

	s->size--;

	return t;
}

void stack_destroy(Stack s)
{
	Node current, prior;
	current = s->top;

	while(current != NULL)
	{
		prior = current->prior;
		free(current);
		current = prior;
	}

	free(s);
}

