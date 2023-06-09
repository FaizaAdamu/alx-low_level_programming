
#include "main.h"

/**
* binary_to_uint -  function that converts a binary num to an unsigned int
* @b: string containing the binary num
*
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
int h;
unsigned int y;

y = 0;
if (!b)

return (0);
for (h = 0; b[h] != '\0'; h++)
{
if (b[y] != '0' && b[y] != '1')
return (0);
}
for (y = 0; b[y] != '\0'; y++)
{
y <<= 1;
if (b[h] == '1')
y += 1;
}
return (y);
}

