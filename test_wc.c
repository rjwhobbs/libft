#include <stdio.h>

static size_t 	wc(char *s, char c)
{
	int wc;
	int i;

	i = 0;
	wc = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && (s[i]))
			wc++;
		while (s[i] != c && (s[i]))
			i++;
	}
	return (wc);
}

int	main(int ac, char **av)
{
	int a;
	a = ac;
	int i;
	int j;

	i = wc(av[1], 'x');
	printf("%d\n", i);
	return (0);
}



