/*************************************************************************
	> File Name: test.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 一  4/13 09:54:14 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//#include<sys/types.h>
#include<unistd.h>
void array_init(int *arr, int len);
void array_show(int *arr, int len);
int main(int argc, char* argv[])
{
   /* int val;
    for(val = 0; val < 10; val++)
	{
		printf("%d\n", rand () % 100);
	}*/
	srand((int)time(0));
/*	printf("%ld", time(0));*/
/*	int bg;
	int end;
	bg = clock();
	srand((int)getpid());
	printf("PID = %d\n", getpid());
	int i;
	int arr[20];
	memset(arr, 0, sizeof(arr));
	end = clock();
	for(i = 0 ; i <= 20; i++)
	{
		arr[i] = rand() % 100;
		printf("%d\t", arr[i]);
	}
	printf("time: %.9fs\n", (double)(end - bg) / CLOCKS_PER_SEC);*/
	int len;
	len = rand() % 100;
	int arr[len];
	array_init(arr, len);
	array_show(arr, len);
	return 0;
}
void array_init(int *arr, int len)
{
	int i;
	for(i = 0; i<= len -1; i++)
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
	printf("\n");
}
