#include "libft.h"

int	main(int ac, char **av)
{
	int a;
	int i;

	a = ac;
	i = ft_strequ(av[1], av[2]);
	ft_putnbr(i);
	return (0);
}
