#include "libft.h"
#include <string.h>
int	main(int ac, char **av)
{
	int a;
	char *s = strcpy(av[1], av[2]);
	void **p2s;

	*p2s = s;
	a = ac;
	//ft_putendl(av[1]);
	//ft_strdel(p);
	ft_putendl(p2s);
	return (0);
}


