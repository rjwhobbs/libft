#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int a;
	a = ac;

	void **p2;
	void *p1;

	p1 = av[1];
	p2 = &p1;
	
	printf("%s\n", *p2);

	return (0);
}



