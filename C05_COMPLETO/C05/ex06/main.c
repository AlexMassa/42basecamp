#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	int n;

	n = 7;
	printf("%i eh primo? 1->sim 0->nao \nResposta: %i\n", n, ft_is_prime(n));
	return(0);
}