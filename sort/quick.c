#include"pub.h"
int partition(int arr[], int left, int right)
{
	int pivot = left;
	while(left < right) {
		while(arr[right] > arr[pivot] && right > left)
			right--;
		while(arr[left] <= arr[pivot] && left < right)
			left++;
		if (left < right) {
			swap(&arr[left], &arr[right]);
		}
	}
	swap(&arr[pivot],&arr[left]);
	return left;
}
int quick(int arr[], int left, int right)
{
	if (left >= right)
		return 0;
	int pivot = partition(arr, left, right);
	quick(arr, left, pivot - 1);
	quick(arr, pivot + 1, right);
	return 0;
}

int quick_sort(int arr[], int len)
{
	return quick(arr, 0, len - 1);
}

