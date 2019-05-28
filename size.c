#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

//void	memfun(void)
//{
//
//}


int	main(void)
{
	char *s1;

	s1 = (char *)malloc(sizeof(*s1) * (4 + 1));
	s1[0] = 't';
	s1[1] = 't';
	s1[2] = 't';
	s1[3] = 't';
	s1[4] = '\0';

	write(1, s1, 5);
	free(s1);
	printf("%s\n", s1);

	return (0);
}



