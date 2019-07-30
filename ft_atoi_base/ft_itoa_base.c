#include <stdlib.h>

static int  v_len(long int v, int base)
{
     int len;

     len = 0;
     while (v > base)
     {
          v /= base;
          len++;
     }
     len++;
     return (len);
 }

char    *ft_itoa_base(int value, int base)
{
      char *str;
      char sym[] = "0123456789ABCDEF";
      int sign;
      int len;
      long int v;

      v = value;
      sign = 1;
      len = 0;
      if (base < 2 || base > 16)
      {
          str = NULL;
          return (str);
      }
       if (v < 0)
      {
          v *= -1;
          if (base == 10 || base == 2)
               sign = -1;
      }
      len = v_len(v, base);
      if (sign == -1 || base == 2)
          len++;
      str = (char *)malloc(sizeof(char) * len);
      str[len--] = 0;
      while (len >= 0)
      {
          str[len] = sym[v % base];
          v /= base;
          if (sign == -1 && len == 0 && base == 10)
              str[len] = '-';
          len--;
      }
	return (str);
}
