#include<stdio.h>
#include<stdlib.h>
int swap(int *a, int *b);
int bubble_sort(int arr[], int len);
int select_sort(int arr[], int len);
int insert_sort(int arr[], int len);
int shell_sort(int arr[], int len);
int merge_sort(int arr[], int len);
int quick_sort(int arr[], int len);
int heap_sort(int arr[], int len);

int print_swap_count(void);

typedef int (*sort) (int arr[], int len);
struct function {
	char *name;
	sort func;
};
