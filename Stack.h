/*
 * Stack.h
 *
 *  Created on: 24/03/2017
 *      Author: Usuario
 */

#ifndef STACK_H_
#define STACK_H_

typedef void* Type;
typedef struct strNode* Node;
typedef struct strStack* Stack;

typedef enum { false, true } bool;

Stack stack_create();
int   stack_size(Stack);
bool  stack_isEmpty(Stack);
Type  stack_top(Stack);
void  stack_push(Stack, Type);
Type  stack_pop(Stack);
void  stack_destroy(Stack);



#endif /* STACK_H_ */
