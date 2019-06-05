#include "libft.h"

int	main(int ac, char **av)
{
	int a;

	a = ac;
	ft_putendl(ft_strjoin(av[1], av[2]));
	return (0);
}
