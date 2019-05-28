#include "libft.h"

void	ft_strclr(char *s)
{
	int l;

	l = ft_strlen(s);
	ft_memset(s, '\0', l);
}
