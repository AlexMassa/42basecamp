#include <stdlib.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	div = &a;
	mod = &b;
	a  = 10;
	b  = 2;

	ft_ultimate_div_mod(div, mod);
	printf("Este e o quociente do calculo: %d ", *div);
	printf("Este e o modulo do calculo: %d \n", *mod);
	return (0);
}
