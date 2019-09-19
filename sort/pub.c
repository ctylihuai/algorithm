#include"pub.h"
static int swap_count = 0;
int swap(int *a, int *b)
{
	*a = (*a)^(*b);
	*b = (*a)^(*b);
	*a = (*a)^(*b);
	swap_count++;
}
int print_swap_count()
{
	printf("swap count %d\n", swap_count);
	return 0;
}
