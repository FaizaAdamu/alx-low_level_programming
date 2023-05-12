#include <stdio.h>
/**
  *_strlen - returns the length of a string
  * @s: the string
  *
  *Return: length of @s.
  */
size_t _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
