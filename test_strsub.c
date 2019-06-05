#include "libft.h"

int	main(int ac, char **av)
{
	int a;
	int i;
	int j;

	a = ac;
	j = ft_atoi(av[2]);
	i = ft_atoi(av[3]);
	ft_putendl(ft_strsub(av[1], j, i));
	return (0);
}
