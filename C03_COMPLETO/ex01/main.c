#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)

{ 
	char *source1 = "aaaaddda";
	char *source2 = "aaaadddA";

	printf("String 1: %s\n",source1);
	printf("String 2: %s\n",source2);

	printf("Diferenca de caracteres: %d\n",strncmp(source1,source2, 10));
	printf("Diferenca de caracteres: %d\n",ft_strncmp(source1,source2, 10));
	return (0);
} 
