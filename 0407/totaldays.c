/*************************************************************************
	> File Name: totaldays.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 三  4/ 8 21:36:06 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool judgeleap(int year);
int getdayofyear(int year, int month, int day);
int main(int argc, char* argv[])
{
	int year1;
	int year2;
	int mon1;
	int mon2;
	int day1;
	int day2;
	int res;
	int cnt_y = 0;
	int cnt_n = 0;
	int cnt_day;
	int jud1;
	int jud2;
	int jud3;
	int val1;
	int val2;
	while(fflush(stdin), (res = scanf("%d %d %d %d %d %d", &year1, &mon1, &day1, &year2, &mon2, &day2)) != EOF)
	{    
		jud2 = judgeleap(year1);
		jud3 = judgeleap(year2);
         if(res != 6)
		 {
			 continue;
		 }
		 if(mon1 > 12 || mon2 > 12)
		 {
			 continue;
		 }
		 if(jud2 == 1 && mon1 == 2 && day1 > 29)
		 {
			 continue;
		 }else if(jud2 == 0 && mon1 == 2 && day1 >28)
		 {
			 continue;
		 }
		 if(jud3 == 1 && mon2 == 2 && day2 > 29)
		 {
			 continue;
		 }else if(jud3 == 0 && mon2 == 2 && day2 > 28)
		 {
			 continue;
		 }
		 for(; year1 < year2; year1++)
		 {
			 jud1 = judgeleap(year1);
			 if(jud1 == 1)
			 {
				 cnt_y++;
			 }else if(jud1 == 0)
			 {
				 cnt_n++;
			 }
		 }
		 cnt_day = cnt_y * 366 + cnt_n * 365;
	
    val1 = getdayofyear(year1, mon1, day1) + day1;
	val2 = getdayofyear(year2, mon2, day2) + day2;
	res = cnt_day + val2 - val1;
	printf("Total days is %d", res);
	}
	return 0;
}
bool judgeleap(int year)
{
	if(year % 4 == 0 && year % 100 != 0 || year % 400 ==0)
	{
		return true;
	}else
	{
		return false;
	}
}
int getdayofyear(int year, int month, int day)
{
	int res = 0;
	int i;
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
				   if(year % 4 == 0 && year % 100 != 0 || year % 400 ==0)
				   {
					   res = res + 29;
				   }else
				   {
					   res = res + 28;
				   }
				   ; break;
		}
	}	
	return res;
}	
