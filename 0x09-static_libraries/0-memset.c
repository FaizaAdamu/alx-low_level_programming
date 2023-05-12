#include "main.h"

/**
  * _memset -  function that fills memory with a constant byte.
  * @n: bytes of memory area pointed to @s
  * @b: memory area pointer
  * @s: starting address of memory to be filled
  * Return: a pointer to the momory area @s
  */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
