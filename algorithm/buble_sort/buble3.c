/*************************************************************************
	> File Name: buble3.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 一  4/13 15:50:39 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
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
	int down, up;
	int up_cnt, down_cnt;
	int index, tmp;
	down = len;
	up = -1;

	up_cnt = 0;
	down_cnt = 0;
	while(up <= down)
	{
		//down;
		for(index = up + 1; index + 1 < down; index++)
		{
			if(arr[index] > arr[index + 1])
			{
				tmp = arr[index];
				arr[index] = arr[index + 1];
				arr[index + 1] = tmp;
			}
		}
		down--;
        
		//up;
		for(index = down - 1; index - 1 > up; index--)
		{
			if(arr[index] < arr[index - 1])
			{
				tmp = arr[index];
				arr[index] = arr[index - 1];
				arr[index - 1] = tmp;
			}
		}
		up++;
	}
}

