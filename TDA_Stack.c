/*
 ============================================================================
 Name        : TDA_Stack.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "Stack.h"

int main()
{
	Stack s = stack_create();
	char s1[]="Hola, mundo";
	char s2[]="ADiosadiosadios";
	char s3[]="A comer a comer a comer";

	stack_push(s, s1);
	stack_push(s, s2);
	stack_push(s, s3);

	char * t;

	while(!stack_isEmpty(s))
	{
		t=stack_pop(s);
		puts(t);
		//si la memoria de s1, s2, s3... fuera din�mica
		//y ya no pens�ramos utilizarlas m�s
		//aqu� las liberar�amos
		//usando free(t) para los primitivos y arreglos unidimensionales de primitivos
		//o usando la funci�n _destroy() para instancias de un Tipo de Dato Abstracto (como vec3_destroy())
	}

	return 0;
}
