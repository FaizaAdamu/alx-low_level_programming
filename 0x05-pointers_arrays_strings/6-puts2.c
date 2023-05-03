#include "main.h"
/**
  * puts2 -  prints every other character of a string
  * @str: input
  * Return: 0
  */
void puts2(char *str)
{
	int n;
	int k = 0;

	while (str[k] != '\0')
	{
	k++;
	}

	for (n = 0; n < k; n += 2)
	{
	_putchar(str[n]);
	}
	_putchar('\n');
}

