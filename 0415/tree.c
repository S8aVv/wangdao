/*************************************************************************
	> File Name: tree.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/15 21:37:41 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int fir;
	int sec;
	int thr;
	int line;
	for(fir = 0; fir <= 4; fir++)
	{
		for(sec = 4; sec >= fir; sec--)
		{
			printf(" ");
		}
		for(thr = 0; thr <= fir; thr++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(line = 4; line >= 0; line--)
	{
		printf("      *\n");
	}
    return 0;
}
