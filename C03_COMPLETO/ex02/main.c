#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{ 
	char *source = "abcd";
	char *destin = "bobaddss";

	printf("Fonte: %s\n",source);
	printf("Destino: %s\n",destin);

	printf("Diferenca de caracteres: %s\n",strcat(source,destin));
	printf("Diferenca de caracteres: %s\n",ft_strcat(source,destin));
	return (0);
} 
