/*************************************************************************
	> File Name: test.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 二  4/14 22:38:20 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void array_init(int *arr, int len);
void array_show(int *arr, int len);
void array_sort(int *arr, int len);
int main(int argc, char* argv[])
{
	srand((int)time(0));
	int len = rand() % 100;
	int array[len];
	printf("the array is:");
    array_init(arr, len);
	array_show(arr, len);
    quick_sort(arr, len);
    printf("\n");
	printf("After sort, the array is:");
	array_show(arr, len);
	printf("\n");
	return 0;
}
void array_init(int *arr, int len)
{
	int i;
	for(i = 0; i <= len - 1; i++)
	{
		array[i] = rand() % 100;
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
void quick_sort(int *arr, int len)
{
    
}
