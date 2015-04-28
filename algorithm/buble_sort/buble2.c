/*************************************************************************
	> File Name: buble2.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 一  4/13 15:38:41 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void array_init(int *arr, int len);
void array_show(int *arr, int len);
void array_buble(int *arr, int len);
int main(int argc, char* argv[])
{   
	int len;
	len = rand() % 100;
	srand((int)time(0));
	int arr[len];
	array_init(arr, len);
	array_show(arr, len);
    printf("\n");
	array_buble(arr, len);
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
void array_buble(int *arr, int len)
{
	int i;
	int j;
	int temp;
	for(i = len - 1; i >= 0; i--)
	{
		for(j = 0; j < i; j++)
		{
            if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
