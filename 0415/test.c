/*************************************************************************
	> File Name: test.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/15 21:36:33 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void array_show(int arr[][3], int len);
void array_init(int arr[][3], int len);
int main(int argc, char* argv[])
{
/*	int arr2[2][3] = {{1,2,3}, {4,5,6}};
	printf("%d\n", arr2[1]);
	printf("%d\n", arr2[1][1]);*/
	srand((int)getpid());
	int len;
	len = rand() % 100;
	int arr[len][3];
	array_init(arr, len);
	array_show(arr, len);
	return 0;
}
void array_show(int arr[][3], int len)
{
	int i, j;
	for(i = 0; i<= len - 1; i++)
	{
		for(j = 0; j <= 3 - 1; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}
void array_init(int arr[][3], int len)
{
	int i, j;
	for(i = 0; i<= len - 1; i++)
	{
		for(j = 0; j<= 3 - 1; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
