#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int n;

	n = 4;
	printf("Resultado: %i\n", ft_recursive_factorial(n));

	return(0);
}