#include <stdio.h>

void word(void) __attribute__ ((constructor));

/**
 * word - prints a sentence before the main function is executed
 */
void word(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

