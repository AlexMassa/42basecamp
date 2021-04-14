#include <stdio.h>
#include <unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int     main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	int x;
	int y;

	a = 10;
	b = 2;
	div = &x;
	mod = &y;

	ft_div_mod(a, b, div, mod);
	printf("Esta e o quociente do calculo: %d ", *div);
	printf("Este e o modulo do calculo: %d \n", *mod);
	return (0);
}
