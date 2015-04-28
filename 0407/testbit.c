/*************************************************************************
	> File Name: testbit.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 一  4/ 6 23:35:16 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int val1 = 0x0000007b;//123
	int res1;
	int res2;
	int res3;
	int res4;
	int val2 = -0x0000007b;//-123
	res1 = val1 >> 1;
	res2 = val2 >> 1;
    res3 = val1 << 1;
	res4 = val2 << 1;
    printf("123补码为:0000007b\n");
	printf("123右移：%08x\n", res1);
	printf("-123右移：%08x\n", res2);
	printf("123左移：%08x\n", res3);
	printf("-123左移：%08x\n", res4);
	return 0;
}
