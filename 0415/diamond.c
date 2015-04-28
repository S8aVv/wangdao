/*************************************************************************
	> File Name: diamond.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/15 21:59:15 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int fir;
	int sec;
	int thr;
	int fiv;
	int fou;
	int six;
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
	for(fou = 4; fou >= 0; fou++)
	{
		for(fiv = 4; fiv <= fou; fiv--)
		{
			printf(" ");
		}
		for(six = 0; six <= fiv; six++)
		{
			printf(" *");
		}
		printf("\n");
	}
    return 0;
}
