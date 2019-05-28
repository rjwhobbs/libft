#include <stdio.h>
#include "libft.h"

int main () {
   char src[40];
   char dest[100];
  
   printf("%c\n", '\0');
   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}
