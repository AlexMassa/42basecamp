#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int n;

	n = 8;
	printf("Foi dado %i, o proximo primo eh: %i\n", n, ft_find_next_prime(n));
	return(0);
}