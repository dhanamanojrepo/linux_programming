/* This example handles command line arguments.
 * Compile the code using below command:
 * $ gcc -o arglist arglist.c
 * Run the code using below command:
 * $ ./arglist arg1 arg2 arg3The name of this program is ./arglist.
 * OUTPUT:
 * This program was invoked with 3 arguments.
 * The arguments are: 
 * arg1
 * arg2
 * arg3
 */

#include <stdio.h>

int main (int argc, char* argv[])
{
	printf ("The name of this program is %s.\n", argv[0]);
	printf("This program was invoked with %d arguments.\n", argc-1);
	/* Condition to check any command-line arguments specified */
	if (argc > 1) {
		/* Yes, print them. */
		int i;
		printf ("The arguments are: \n");
		for (i=1; i<argc; ++i)
			printf(" %s\n", argv[i]);
       	}
	return 0;
}
