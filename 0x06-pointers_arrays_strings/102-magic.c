#include <stdio.h>
/*
 * main - Entry point
 */
int main(void)
{
	int n, a[5], *p;

	a[2] = 1024;
	p = &n;
	/*
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * Return: Always 0
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
