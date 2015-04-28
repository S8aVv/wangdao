/*************************************************************************
	> File Name: bubble1.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 一  4/13 13:53:22 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(int argc, char* argv[])
{
    int	len = 20;
	int arr[len];
	int i;
	int j;
	int k;
	int temp;
	srand((int)time(0));
	memset(arr, 0, sizeof(arr));
	printf("The array:\n");
	for(i = 0; i <= len - 1; i++)
	{
		arr[i] = rand() % 100;
		printf("%d\t", arr[i]);
	}
	printf("\n");
	printf("after buble, the array :\n");
    for(j = len - 1; j >= 0; j--)
	{
		for(k = 0; k < j; k++)
		{
			if(arr[k] < arr[k + 1])
			{
			  temp = arr[k];
			  arr[k] = arr[k + 1];
			  arr[k + 1] = temp;
			}
		}
		printf("%d\t", arr[k]);
	}
	printf("\n");
	return 0;
}
