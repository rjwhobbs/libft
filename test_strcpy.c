#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int a;
	a = ac;

	printf("%s\n", ft_strcpy(av[1], av[2]));
	return (0);
}

