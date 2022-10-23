/*
 ============================================================================
 Name        : bibliotecas_C.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "general.h"

int main(void)
{
	setbuf(stdout, NULL);

	char str[11];

	while(1 == 1)
	{
		grl_Get_ValidName(str, 11, "Cadena", "Error");


	}

	return EXIT_SUCCESS;
}
