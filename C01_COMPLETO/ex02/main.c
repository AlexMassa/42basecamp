#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int*b);

int		main(void)
{
	int *a;
	int *b;
	int x;
	int y;

	x = 10;
	y = 11;
	a = &x;
	b = &y;

	ft_swap(a, b);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}