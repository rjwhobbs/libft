#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int a;
	int i;

	a = ac;
	i = ft_atoi(av[1]);

	printf("%s\n", ft_memcpy(((void *)0), ((void *)0), i));
	return (0);
}
