#include <unistd.h>

/**
  * _putchar - writes the character c to stdio.
  *
  * Return: Always 0.
  *
  * @c : character.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
