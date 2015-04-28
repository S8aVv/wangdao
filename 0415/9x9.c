/*************************************************************************
	> File Name: test.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/15 21:26:16 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char* argv[])
{
	int fir;
	int sec;
	int val;
	int res;
	for(fir = 1; fir <= 9; fir++)
	{
	   for(sec = 1; sec <= fir; sec++)
	   {
		   printf("%-2d* %-2d= %-3d ", fir, sec, fir * sec);
           
	   }
	   printf("\n");
	}
	return 0;
}
