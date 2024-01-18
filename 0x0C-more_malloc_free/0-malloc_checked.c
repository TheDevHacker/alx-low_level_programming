#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, else exit (98)
 * @b: size of the memory block allocated
 *
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
