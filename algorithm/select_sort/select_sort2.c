/*************************************************************************
	> File Name: select_sort2.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/15 15:39:07 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<unistd.h>
#define B printf("The array is:\n");
#define A printf("After sort, the array is:\n");
void array_init(int *arr, int len);
void array_show(int *arr, int len);
void select2(int *arr, int len);
int main(int argc, char* argv[])
{
	srand((int)getpid());
	int len;
	len = rand() % 100;
	int arr[len];
	B;
	array_init(arr, len);
	array_show(arr, len);
	printf("\n");
	select2(arr, len);
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
	for(i = 0; i<= len - 1; i++)
	{
		printf("%d\t", arr[i]);
	}
}
void select2(int *arr, int len)
{
	int min;
	int cnt, index, temp;
	for(cnt = 0; cnt != len - 1; cnt++)
	{
		min = 0;
		for(index = 0; index != len - cnt; index++)
		{
			if(arr[index] > arr[min])
			{
				min = index;
			}
		}
		temp = arr[min];
		arr[min] = arr[len - 1 - cnt];
		arr[len - 1 - cnt] = temp;
	}
}

