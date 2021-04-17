#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int n;
	int p;

	n = -2147483648;
	p = 3;
	printf("Resultado: %i\n", ft_recursive_power(n,p));

	return(0);
}