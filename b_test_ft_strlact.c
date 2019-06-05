#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int a;
	int i;
	size_t s;
	char s2[8] = "fox";
	char s1[3] = "cat";

	a = ac;
	i = ft_atoi(av[1]);

	s = ft_strlcat(s2 ,s1 , i);
	printf("%s\n", s2);
	ft_putnbr(s);
	ft_putchar('\n');
	return (0);
}
