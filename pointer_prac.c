#include <stdio.h>

int	main(int ac, char **av)
{
	int a;
	void *str;

	a = ac;
	(char *)str = av[1];
	printf("%c\n", &str[1]);
	return (0);
}
