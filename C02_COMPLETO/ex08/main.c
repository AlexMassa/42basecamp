#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char *test1;
	char *test2;
	char *test3;

	char t1[] = "GIGANTE";
	char t2[] = "Linguica";
	char t3[] = "$Marv1n///s214";

	test1 = t1;
	test2 = t2;
	test3 = t3;

	printf("test1: %s\n", t1);
	printf("test2: %s\n", t2);
	printf("test3: %s\n", t3);

	printf("match1: %s\n", ft_strlowcase(test1));
	printf("match2: %s\n", ft_strlowcase(test2));
	printf("match3: %s\n", ft_strlowcase(test3));
	return(0);
}