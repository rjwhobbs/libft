#include <stdio.h>
#include "libft.h"
#include <string.h>

int		main(int argc, const char *argv[])
{
	char	*dest;
	size_t	t;

	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[11] = 'a';
	t = strlcat(dest, "lorem", 15);
	printf("%lu\n", t);
	write(1, "\n", 1);
	write(1, dest, 15);

	return (0);
}
