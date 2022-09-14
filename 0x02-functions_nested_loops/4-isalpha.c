#include "main.h"
/**
  * _isalpha - Alx guide
  * @c: is a letter, lowercase or uppercase
  * main - letter, lowercase or uppercase
  * Return; either 1 or 0.
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
