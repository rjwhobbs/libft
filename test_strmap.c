#include "libft.h"

char	rh_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	main(int ac, char **av)
{
	int a;
	a = ac;

	ft_putendl(ft_strmap(av[1], rh_toupper));
	return (0);
}
