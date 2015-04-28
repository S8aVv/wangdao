/*************************************************************************
	> File Name: select_sort.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/15 13:47:34 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N printf("\n")
#define A printf("After sort, the array is: ")
#define B printf("the array is:")
void array_init(int *arr, int len);
void array_show(int *arr, int len);
void select_sort(int *arr, int len);
int main(int argc, char *argv[])
{
	srand((int)time(0));
	int len;
	len = rand() % 100;
	int arr[len];
	memset(arr, 0, sizeof(arr));
	B;
	N;
	array_init(arr, len);
	array_show(arr, len);
    N;
	select_sort(arr, len);
	A;
	N;
	array_show(arr, len);
	N;
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
	for(i = 0; i<= len - 1; i++)
	{
		printf("%d\t", arr[i]);
	}
}
void select_sort(int *arr, int len)
{
    int min;
	int i;
	int j;
	int temp;
	for(i = 0; i <= len -1; i++)
	{
		min = i;
		for(j = i + 1; j<= len; j++)
		{
			if(arr[min] > arr[j])
			{
				min = j;
			}
            temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}
