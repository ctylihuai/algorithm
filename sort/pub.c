#include"pub.h"
int swap_count;
int cmp_count;
int swap(int *a, int *b)
{
#if 1
	*a = (*a)^(*b);
	*b = (*a)^(*b);
	*a = (*a)^(*b);
#else
	int tmp = *a;
	*a = *b;
	*b = tmp;
#endif
	swap_count++;
}
int print_swap_count()
{
	printf("swap count %d\n", swap_count);
	printf("cmp count %d\n", cmp_count);
	return 0;
}
