#include"pub.h"
static int swap_count = 0;
int swap(int *a, int *b)
{
	*a = (*a)^(*b);
	*b = (*a)^(*b);
	*a = (*a)^(*b);
	printf("swap count %d\n", swap_count++);
}
