#include "libft.h"

int	main(int ac, char **av)
{
	int a;
	int i;
	int j;

	j = ft_atoi(av[3]);
	a = ac;
	i = ft_strnequ(av[1], av[2], j);
	ft_putnbr(i);
	return (0);
}
