#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)

{ 
	char *source1 = "ad";
	char *source2 = "ad";

	printf("String 1: %s\n",source1);
	printf("String 2: %s\n",source2);

	printf("Diferenca de caracteres: %d\n",strcmp(source1,source2));
	printf("Diferenca de caracteres: %d\n",ft_strcmp(source1,source2));
	return (0);
} 
