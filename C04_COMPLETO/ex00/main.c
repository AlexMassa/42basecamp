#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char str[] = "bolota";
	int	cpm;

	cpm = ft_strlen(str);
	printf("Em '%s' temos '%d' caracteres.\n", str, cpm);
	return (0);
}
