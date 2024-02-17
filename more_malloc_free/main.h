#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <stdlib.h>  /* Include necessary header files */

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 *
 * Return: A pointer to the allocated memory
 *         Exits with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b);

/* Add other function prototypes or macro definitions as needed */

#endif /* MY_HEADER_H */

