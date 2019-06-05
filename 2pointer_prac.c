#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int *a;

	a = (int*)malloc(sizeof(int) * 3);
	a[0] = 11;
	a[1] = 22;
	a[2] = 33;

	printf("addy a[0] %lu\n", &a[0]);
	printf("addy a[1] %lu\n", &a[1]);
	printf("addy a[2] %lu\n", &a[2]);

	printf("*a %d\n", *a);
	printf("*a + 1 %d\n", *a + 1);
	printf("*a + 2 %d\n", *a + 2);
	return (0);
}
