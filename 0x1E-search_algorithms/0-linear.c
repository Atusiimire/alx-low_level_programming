#include "search_algos.h"

/**
 * linear_search - a function that searches for a value
 * @array: pointer to the first element of array
 * @size: number of elements in array
 * @value: the value being searched for
 * Return: -1 if failed else 0
 */

int linear_search(int *array, size_t size, int value)
{
size_t iter;
if (array == NULL)
return (-1);
for (iter = 0; iter < size; iter++)
{
printf("Value checked array[%d] = [%d]\n", (int)iter, array[iter]);
if (value == array[iter])
return (iter);
}
return (-1);
}
