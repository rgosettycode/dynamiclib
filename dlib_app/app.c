/*
all@goprasad:~/all/dynamiclib-app$ ls
app.c  dlib.h  libsh.so
all@goprasad:~/all/dynamiclib-app$ export LD_LIBRARY_PATH=/home/all/g/dynamiclib/dlib_app:$LD_LIBRARY_PATH
all@goprasad:~/all/dynamiclib-app$ gcc app.c  libsh.so
all@goprasad:~/all/dynamiclib-app$ ls
a.out  app.c  dlib.h  libsh.so
all@goprasad:~/all/dynamiclib-app$

*/
#include <stdio.h>
#include <unistd.h>
#include "dlib.h"

int main()
{
	int x, y, z, i;

	x = 5;
	y = 10;

	z = sum(x, y);
	printf("\nsum of x, y = %d\n", z);

	for (i = 0; i < 10; i++) {
		printf("inc = %d\n", inc(5));
		sleep(1);
	}

	return 0;
}
