#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int mat;
	int size;

	mat = {1, 2, 3, 4, 5, 6};
	size = sizeof(mat) / sizeof(mat[0]);

	i = 1;
	while(++i < size)
	printf("%d /n",mat[i]);

	ft_rev_int_tab(mat, size);
	
	i = 0;
	while (++i < size)
	printf("%d \n", mat[i]);
}
