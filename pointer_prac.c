#include <stdio.h>

int	main(void)
{
	int a = 101;
	int *pa;
	int **ppa;
	int *dppa;
	int ddppa;

	pa = &a;
	printf("*pa %d\n", *pa);
	ppa = &pa;
	printf("**ppa %d\n", **ppa);
	dppa = *ppa;
	printf("*dppa %d\n", *dppa);
	ddppa = *dppa;
	printf("ddppa %d\n", ddppa);




	return (0);
}
