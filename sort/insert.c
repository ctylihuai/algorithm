#include"pub.h"
int insert_sort(int arr[], int len)
{
	for(int i = 1; i < len; i++)
	{
		int tmp = arr[i];
		int j = 0;
		for(j = i - 1; j >= 0; j--)
		{
			if (tmp < arr[j])
			{
				arr[j+1] = arr[j];
			} else {
				break;
			}
		}
		arr[j+1] = tmp;
	}
	return 0;
}
