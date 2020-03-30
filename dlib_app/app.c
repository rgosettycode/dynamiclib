/*
all@goprasad:~/all/dynamiclib-app$ ls
app.c  dlib.h  libsh.so
all@goprasad:~/all/dynamiclib-app$ export LD_LIBRARY_PATH=~/g/dynamiclib/dlib_app:$LD_LIBRARY_PATH
all@goprasad:~/all/dynamiclib-app$ gcc app.c  libsh.so
all@goprasad:~/all/dynamiclib-app$ ls
a.out  app.c  dlib.h  libsh.so
all@goprasad:~/all/dynamiclib-app$

*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../dlib/dlib.h"

int main(int argc, char *argv[])
{
	int x, y, z, i, incval = 5;

	x = 5;
	y = 10;

	if (argc == 2) {
		incval = atoi(argv[1]);
	}
	z = sum(x, y);
	printf("\nsum of x, y = %d\n", z);
	writefile(0);
	for (i = 0; i < 10; i++) {
		//printf("inc = %d\n", inc(incval));
		printf("incfile = %d\n", incfile(incval));
		sleep(1);
	}



	return 0;
}
