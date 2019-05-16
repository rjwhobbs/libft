#include <unistd.h>
#include "libft.h"

int	ft_putstr(const char *str)
{
	int result;

	while(*str)
		result = write(1, str++, 1);
	return (result);
}

