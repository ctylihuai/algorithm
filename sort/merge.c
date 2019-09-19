#include"pub.h"
int tmp[20];
static int merge_value(int arr[], int l, int r)
{
	int mid = (l + r)/2;
	int count = 0;
	int i = l, j = mid + 1;
	while(i <= mid && j <= r) {
		if (arr[i] < arr[j]) {
			tmp[count++] = arr[i++];
		} else {
			tmp[count++] = arr[j++];
		}
	}
	while(j <= r)
		tmp[count++] = arr[j++];
	while(i <= mid)
		tmp[count++] = arr[i++];
	count = 0;
	while(l <= r)
		arr[l++] = tmp[count++];
}


static int merge(int arr[], int left, int right)
{
	if (left < right) {
		int mid = (left + right)/2;
		merge(arr, left, mid);
		merge(arr, mid + 1, right);
		merge_value(arr, left, right);
	}
}

int merge_sort(int arr[], int len)
{
	return merge(arr, 0, len - 1);
}


