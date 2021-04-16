#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

int   main(void)
{
  char *str;
  
  str = "ABCDE";
  ft_putstr(str);
}