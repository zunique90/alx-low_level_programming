#include <stdio.h>


/**
 * runFirst - executes before the main function
 *
 */


void __attribute__((constructor)) runFirst()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
