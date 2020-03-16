/*
 * gcc -shared -o libsh.so dlib.c
 */


#include <stdio.h>
#include "dlib.h"


static int c;
int inc(int i)
{
	c = c + i;
	return c;
}

int sum(int a, int b)
{
	return (a + b);
}


