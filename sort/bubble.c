#include "pub.h"
int bubble_sort(int arr[], int len)
{
	printf("bubble sort start\n");
	int flag = 0;
	for (int i = 0; i < len; i++) {
		/* all data should compare */
		flag = 0;
		for (int j = 0; j < len - i -1; j++) {
			/* j+1 already part into compare */
			/* every time reduce one ,reduce i */
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				flag = 1;
			}
		}
		if (!flag) {
			return 0;
		}
	}
	return 0;
}
