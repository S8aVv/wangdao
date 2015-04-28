/*************************************************************************
	> File Name: judge4.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/ 8 15:58:02 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool judge4(int year);
int main(int argc, char* argv[])
{
	int y;
	int res;
	scanf("%d", &y);
	res = judge4(y);
	if(res == 1)
	{
		printf("this year is leap year\n");
	}else
	{
		printf("this year is not leap year\n");
	}
	return 0;
}
bool judge4(int year)
{
	if(year % 4 == 0 && year != 100 || year % 400 == 0)
	{
      return true;
	}else
	{
		return false;
	}
}
