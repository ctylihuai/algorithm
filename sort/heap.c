#include"pub.h"
#define LEFT_CHILD (2 * i + 1)
#define RIGHT_CHILD (2 * i + 2)
int _heap_sort(int arr[], int i, int len)
{
	for(int child; LEFT_CHILD < len; i = child) {
		child = (arr[RIGHT_CHILD] > arr[LEFT_CHILD] && (RIGHT_CHILD < len)) ?\
				RIGHT_CHILD : LEFT_CHILD;
		if (arr[child] > arr[i]) {
			swap(&arr[i], &arr[child]);
		} else {
			break;
		}
	}
}

int heap_sort(int arr[], int len)
{
	int i = 0;
	for( i = len/2 - 1; i >= 0 ; i--)
	{
		_heap_sort(arr, i, len);
	}
	for(i = len-1; i > 0; i--)
	{
		swap(&arr[0], &arr[i]);
		_heap_sort(arr, 0, i);
	}
	return 0;
}
