/*************************************************************************
	> File Name: dayofyear.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 二  4/ 7 23:04:24 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int getdayofyear(int year, int month, int day);
int judge4(int year);
int main(int argc, char* argv[])
{
	int y;
	int m;
	int d;
	int res;
	int sum;
	int jud;
	
	while(fflush(stdin),(res = scanf("%d %d %d", &y, &m, &d)) != EOF)
	{
		jud = judge4(y);
		if(res != 3)
		{
			continue;
		}
		if(m > 12)
		{
			continue;
		}
		if(d > 31)
		{
			continue;
		}
		if(jud == 1)
		{
		 if(m == 2)
		 {
			 if(d > 29)
			 {
				continue;
			 }
		 }
		}
		if(jud == 0)
		{
		 if(m == 2)
		 {
			 if(d > 28)
			 {
				 continue;
			 }
		 }
		}
		sum = getdayofyear(y, m, d);
		printf("%d\n", sum);
	}
	return 0;
}
int getdayofyear(int year, int month, int day)
{
	int res;
	int i;
	res = 0;
	for(i = 1; i < month; i++)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: res = res + 31; break;

			case 4:
			case 6:
			case 9:
			case 11: res = res + 30; break;

			case 2:
					if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
					{
                         res = res + 29;
					}else
					{
						 res = res + 28;
					}
						; break;

		}
	}
	res = res + day;
	return res;
}
int judge4(int year)
{
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}else
	{
		return 0;
	}
}
