#include <stdio.h>
#include <stdlib.h>
#include "pub.h"

int arr[20] = {3,5,3,6,2,3,4,7,8,9,
				12, 13, 15, 2, 34,
				32, 456, 32,432 ,11};
struct function sort_f[10] = {
	"bubble", bubble_sort,
	"select", select_sort,
	"insert", insert_sort,
};

int print_arr(int arr[], int len)
{
	printf("data is :\n");
//	printf("%d\n", len);
	int i = 0;
	for (;i < len; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

void print_func()
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d,%s ", i+1, sort_f[i].name);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	printf("%s num\n", argv[0]);
	print_func();
	int i = 1;
	while(i < argc) {
		printf("your choice is %s : %s\n", argv[i], sort_f[atoi(argv[i]) - 1].name);
		i++;
	}
	if (i != 2) {
		printf("argc should less than 2\n");
		return 0;
	}

	sort func = sort_f[atoi(argv[1]) - 1].func;

	int len = sizeof(arr)/sizeof(int);
	if (func) {
		print_arr(arr, len);
		func(arr, len);
		print_arr(arr, len);
	}
	return 0;
}
