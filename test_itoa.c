#include "libft.h"

int	main(int ac, char **av)
{
	int a;
	int i;

	i = ft_atoi(av[1]);
	a = ac;
	ft_putendl(ft_itoa(i));
	return (0);
}

