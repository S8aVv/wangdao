/*************************************************************************
	> File Name: insert_sort.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/15 16:24:08 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define B printf("The array is:\n")
#define A printf("After sort, the array is:\n")
void array_init(int *arr, int len);
void array_show(int *arr, int len);
void insert_sort(int *arr, int len);
void insert(int *arr, int bg, int end);
int main(int argc, char *argv[])
{
	srand((int)getpid());
	int len;
	len = rand() % 100;
	int arr[len];
	B;
	array_init(arr, len);
	array_show(arr, len);
	printf("\n");
	insert_sort(arr, len);
	A;
	array_show(arr, len);
	printf("\n");
	return 0;
}
void array_init(int *arr, int len)
{
	int i;
	for(i = 0; i <= len - 1; i++)
	{
		arr[i] = rand() % 100;
	}
}
void array_show(int *arr, int len)
{
	int i;
	for(i = 0; i <= len - 1; i++)
	{
		printf("%d\t", arr[i]);
	}
}
void insert(int *arr, int bg, int end)
{
	int index;
	int temp;
	temp = arr[end];
	for(index = end - 1; index >= bg; index--)
	{
		arr[index + 1] = arr[index];
	}
	arr[bg] = temp;
}
void insert_sort(int *arr, int len)
{
	int index, insert_index;
	for(index = 1; index != len; index++)
	{
		for(insert_index = index - 1; insert_index >= 0; insert_index--)
		{
			if(arr[insert_index] <= arr[index])
			{
				break;
			}
		}
		insert(arr, insert_index + 1, index);
	}
}
