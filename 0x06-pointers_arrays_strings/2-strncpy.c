#include "main.h"

/**
 * _strncpy - cpoies n bytes of src to the dest string
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 * Return: address of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
if (i < n)
{
for (; i < n; i++)
dest[i] = '\0';
}
return (dest);
}
