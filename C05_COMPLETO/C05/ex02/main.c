#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int n;
	int p;

	n = 4;
	p = 3;
	printf("Resultado: %i\n", ft_iterative_power(n,p));

	return(0);
}