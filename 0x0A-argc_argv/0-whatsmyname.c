#include <stdio.h>

/**
 * main - print name of program
 * @argc: size of argv array * @argv: An array of size argc
 * Return: always successful
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
