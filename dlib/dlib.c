/*
 * gcc -shared -o libsh.so dlib.c
 */


#include <stdio.h>
#include "dlib.h"

int g;
static int c;
int inc(int i)
{
	g = g + i;
	return g;
}

int sum(int a, int b)
{
	return (a + b);
}

int readfile()
{
	FILE *fp;
	int val;

	fp = fopen("file", "r");
	if (fp == NULL) {
		printf("file is not created/open\n");
	}

	fscanf(fp, "%d", &val);
	fclose(fp);
	return val;
}

void writefile(int val)
{
	FILE *fp;

	fp = fopen("file", "w");
	if (fp == NULL) {
		printf("file is not created/open\n");
	}
	fprintf(fp, "%d", val);
	fclose(fp);
}

int incfile(int val)
{
	int c;

	c = readfile();

	c = c + val;

	writefile(c);

	return readfile();
}

