#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char *test;

	char t[] = "oi, tudo bEM? 42palavras quarenta-e-duas; cinquenta+e+um";

	test = t;

	printf("test: %s\n", t);
	printf("match: %s\n", ft_strcapitalize(test));
	return(0);
}