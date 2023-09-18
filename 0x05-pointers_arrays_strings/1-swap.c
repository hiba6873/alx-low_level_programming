#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * swap int
 */
void swap_int(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b =c;
}
