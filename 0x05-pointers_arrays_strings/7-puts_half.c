#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: the string to print
  * Return: 0
  */
void puts_half(char *str)
{
	int m = 0;
	int k;

	while (str[m] != '\0')
	{
	m++;
	}

	if (m % 2 == 1)
	{
	k = (m - 1) / 2;
	k += 1;
	}

	else
	{
	k = m / 2;
	}

	for (; k < m; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}

