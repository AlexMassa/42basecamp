#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{ 
	char *source = "abcdef";
	char *destin = "boba";

	printf("Fonte: %s\n",source);
	printf("Destino: %s\n",destin);

	printf("Diferenca de caracteres: %s\n",strncat(source,destin,3));
	printf("Diferenca de caracteres: %s\n",ft_strncat(source,destin,3));
	return (0);
} 
