#include"pub.h"
int cmp_count;
int select_sort(int arr[], int len)
{
	for(int i = 0; i < len; i++) {
		int min = i;
		for(int j = i; j < len - 1; j++ ) {
			if ((arr[min] > arr[j+1]) && cmp_count++) {
				min = j + 1;
			}
		}
		if (min != i)
			swap(&arr[min], &arr[i]);
	}
	return 0;
}
