#include <stdio.h>

/**
 * main -  program prints a[2] = 98
 * Return: always 0
 */

int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
 /*
  * main - write your line of code here...
  * - you are not allowed to modify p
  */
p[5] = 98 ;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
