#include"pub.h"
int swap_count;
int cmp_count;
int swap(int *a, int *b)
{
	/*
	*a = (*a)^(*b);
	*b = (*a)^(*b);
	*a = (*a)^(*b);
	*/
	int tmp = *a;
	*a = *b;
	*b = tmp;
	swap_count++;
}
int print_swap_count()
{
	printf("swap count %d\n", swap_count);
	printf("cmp count %d\n", cmp_count);
	return 0;
}
