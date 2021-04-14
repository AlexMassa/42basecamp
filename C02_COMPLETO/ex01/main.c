#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[] = "Bob";
	char src[] = "Cachorro";

	printf( "Destino: '%s'\n", dest);
	printf( "Fonte: '%s'\n", src);

	ft_strncpy(dest, src, 3);

	printf( "Novo Destino: '%s'\n", dest );
	return(0);
}