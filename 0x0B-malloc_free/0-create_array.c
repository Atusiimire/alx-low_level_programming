#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 *  @c: char to initialize
 *  @size: size of an array
 *  Return: NULL if size = 0 and a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *pointer;
if (size == 0)
return (NULL);
pointer = malloc(sizeof(char) * size);
if (pointer == 0)
return (NULL);
else
{
for (i = 0; i < size; i++)
pointer[i] = c;
return (pointer);
}
}
