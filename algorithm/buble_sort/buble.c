/*************************************************************************
	> File Name: bubble.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 一  4/13 11:22:56 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void buble(int *arr, int len);
int main(int argc,char *argv[])
{
	srand((int)time(0));
    int i;
	int len;
	len = rand() % 100;
	int arr[len];
	memset(arr, len, sizeof(arr));
	printf("The array:\n");
	for(i = 0; i <= len - 1; i++)
    {
		arr[i] = rand() % 100;
		printf("%d\t", arr[i]);
	}
	printf("\n");
	printf("After sort:\n");
    buble(arr, len);
	for(i = 0; i <= len - 1; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}
void buble(int *arr, int len)
{
	int i;
	int j;
	int temp;
	for(i = len - 1; i >= 0; i--)
	{
		for(j = 0; j < i; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
    
}	
