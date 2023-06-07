#include <stdio.h>
/**
 * main- entry function that calls the pre_main_funct
 * @pre_main_funct- function that gets executed before the main
 * Return: void
 */
pre_main_funct(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
	return (void);
}
int main(void)
{
	pre_main_funct();
	 main();
	return (0);
}
