#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char dig;

	for (dig = '0'; dig <= '9'; dig++)
	putchar(dig);

	for (dig = 'a'; dig <= 'f'; dig++)
	putchar(dig);

	putchar('\n');

	return (0);
}
