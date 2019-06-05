#include "libft.h"

void	rh_putstr(unsigned int i, char *s)
{
	unsigned int j;

	j = 0;
	if (s == NULL)
		write(1, "(null)", 6);
	else
		while(*s && j <= i)
		{
			write(1, s++, 1);
			ft_putchar('\n');
			j++;
		}
}

int	main(int ac, char **av)
{
	int a;
	a = ac;

	ft_striteri(av[1], rh_putstr);
	return (0);
}
