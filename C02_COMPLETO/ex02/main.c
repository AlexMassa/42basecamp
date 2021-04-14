#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str);

int		main(void)
{
	char *test1;
	char *test2;
	char *test3;

	test1 = "P4lha";
	test2 = "Linguica";
	test3 = "$Marv1n///s214";

	printf("test1: %s match: %d\n", test1, ft_str_is_alpha(test1));
	printf("test1: %s match: %d\n", test2, ft_str_is_alpha(test2));
	printf("test1: %s match: %d\n", test3, ft_str_is_alpha(test3));
	return(0);
}