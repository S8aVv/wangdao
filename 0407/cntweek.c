/*************************************************************************
	> File Name: cntweek.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/ 8 23:44:49 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int zeller(int year, int month, int day);
int main(int argc, char *argv[])
{	
	int yr;
    int mn;
	int dy;
	int val;
	int week;
	int res;
	char ch[7] = {0, 1, 2, 3, 4, 5, 6};
	while(fflush(stdin), (val = scanf("%d %d %d", &yr, &mn, &dy)) != EOF)
	{
		if(val != 3)
		{
			continue;
		}
		res = zeller(yr, mn, dy);
        week = res % 7;
	
		printf("%d", ch[week]);
	}
	return 0;
}
int zeller(int year, int month, int day)
{
	int res;
	int c;
	int y;
	if(month == 1 || month ==2)
	{
		year--;
		month = month + 12;
	}
	y = year % 100;
	c = year / 100;
	res = (c / 4) - 2 * c + y + (y / 4) + (13 * (month + 1) / 5) + day - 1; 
	return res;

}
