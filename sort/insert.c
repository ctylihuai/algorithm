#include"pub.h"
int cmp_count;
int insert_sort(int arr[], int len)
{
	for(int i = 1; i < len; i++)
	{
		int tmp = arr[i];
		int j = 0;
		for(j = i - 1; j >= 0 && arr[j] > tmp && cmp_count++; j--)
		{
			arr[j+1] = arr[j];
		}
		arr[j+1] = tmp;
	}
	return 0;
}
