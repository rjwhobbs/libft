#include <unistd.h>
#include "libft.h"

int	ft_putchar(int c)
{
	int result;

	result = write(1, &c, 1);
	return (result);
}


