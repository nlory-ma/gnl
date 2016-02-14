#include <stdio.h>

int		collatz(int x)
{
	if (x % 2 == 0)
		return (x / 2);
	else
		return (3 * x + 1);
}

int			syracuse(int x)
{
	printf("%d\n", x);
	if (x > 1)
		x = syracuse(collatz(x));
	return (x);
}

int			main(void)
{
	syracuse(14);
	return 0;
}

