#include <stdio.h> 

char	*ft_strcpy(char *dest, char *src); 

int		main(void)

{ 
	char source[] = "Pipoca, batata 123";
	char destin[] = "Seu texto aqui";
	char *dest;

	printf("Fonte: %s\n",source);
	printf("Destino: %s\n",destin);

	dest=ft_strcpy(destin,source);

	printf("Novo destino: %s\n",destin);
	return (0);
} 
