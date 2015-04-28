/*************************************************************************
	> File Name: test.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/15 14:05:35 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void array_init(int* arr, int len);
void array_show(int* arr, int len);
void sort(int *arr, int len);
int main(int argc, char* argv[])
{
	srand((int)time(0));
	int len;
	len = rand() % 20;
    int arr[len];
    memset(arr, 0, sizeof(arr));
	array_init(arr, len);
	array_show(arr, len);
	printf("\n");
	sort(arr, len);
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
void sort(int *arr, int len)
{
	int min;
	int fir;
	int sec;
	int temp;
	for(fir = 0; fir < len - 1; fir++)
	{
		min = fir;
		for(sec = fir + 1; sec < len; sec++)
		{
			if(arr[min] > arr[sec])
			{
                min = sec;
			}
		}
		temp = arr[fir];
		arr[fir] = arr[min];
		arr[min] = temp;

	}
}
