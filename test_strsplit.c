#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int a;
	int i;
	int j;

	a = ac;
	char **s;
	
	i = 0;
	j = ft_atoi(av[3]);
	s = ft_strsplit(av[1], av[2][0]);
	while (i < j)
	{
		printf("%s\n", s[i]);
		i++;
	}
	return (0);
}
