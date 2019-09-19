#include"pub.h"
int cmp_count;
int shell_sort(int arr[], int len)
{
	for (int tap = len/2; tap >= 1 ; tap /= 2)
	{
		for(int i = tap; i < len; i++)
		{
			int tmp = arr[i];
			int j = 0;
			for(j = i - tap; j >= 0 && arr[j] > tmp && cmp_count++; j-=tap)
			{
				arr[j+tap] = arr[j];
			}
			arr[j+tap] = tmp;
		}
	}
	return 0;
}

