#include "main.h"
/**
  * reverse_array - function that reverses the content of an array of integers.
  * @a: array
  * @n: number of elements of array
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
int b;
int c;
for (b = 0; b < n--; b++)
{
c = a[b];
a[b] = a[n];
a[n] = c;
}
}

