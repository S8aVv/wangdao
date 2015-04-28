/*************************************************************************
	> File Name: test.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 二  4/ 7 16:21:47 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//bool jud(int i);
//bool judgeleap(int year);
int main(int argc, char* argv[])
{
	/*int val;
	int res;
	val = 0x12345678;
	int cnt;
	int cnt_0;
	cnt_0 = 0;
	int cnt_1 = 0;
	for(cnt = 0; cnt <= 31; ++cnt)
	{
	    res = val & (1 << cnt);
		if(res == 0)
		{
			++cnt_0;
		}
	}
	cnt_1 = 32 - cnt_0;
	printf("%d\n", cnt_0);
	printf("%d\n", cnt_1);*/
  /*
    int arr[2] = {1, 2};
   int *p = arr;
   printf("%d\n", *p ++);  //++与*相同优先级，所以从右往左。
   printf("%d\n", p);
   printf("%d\n", 3 << 1 > 6);
   printf("%d\n", 3 << 1 + 1);
   printf("%d\n", 6 & 7 > 5);*/
  /* int month;
   while(fflush(stdin), scanf("%d", &month) != EOF)
   {
	   switch(month)
	   {
		   case 1:
		   case 3:
		   case 5:
		   case 7:
		   case 8:
		   case 10:
		   case 12: printf("31!\n"); break;
		   
		   case 2: printf("28!\n"); break;
		   
		   case 4:
		   case 6:
		   case 9:
		   case 11: printf("30!\n"); break;
		   defalut: printf("illegal input!\n");	
	   }
   }*/
  /*
   int val;
   while(scanf("%d", &val) != EOF)
   {
	   if(val == 1)
		{
			goto LABEL_ERR;
		}else if(val == 2)
		{
			goto LABEL_ERR;
		}else
		{
			goto LABEL_ERR;
		}
   }   
LABEL_ERR:
   
printf("error!\n");*/
   /*
	int year;
	int month;
	int day;
	while(fflush(stdin),scanf("%d %d %d", &year, &month, &day) != EOF)
	{
		printf("year = %d, month = %d, day = %d", year, month, day);
	}*/
	/*
    int val;
	int res;
	while(fflush(stdin),scanf("%d", &val) != EOF)
	{
		printf("%d", val);
	}*/
	/*
	int judge;
	int val;
	scanf("%d", &val);
	judge = jud(val);
	if(judge == true)
	{

		printf("hello\n");
	}*/
  /*
   int year1;
   int year2;
   int cnt_y = 0;
   int cnt_n = 0;
   int cnt_day;
   int jud;
   int res;
   while(fflush(stdin),(res = scanf("%d %d", &year1, &year2)) != EOF)
   {
	   if(res != 2)
	   {
		   continue;
	   }
       for(;year1 <= year2 - 1; year1++)
	   {
		   jud = judgeleap(year1);
		   if(jud == 1)
		   {
			   cnt_y++;
		   }else if(jud == 0)
		   {
			   cnt_n++;
		   }
	   }
	   cnt_day = cnt_y * 366 + cnt_n * 365;
	   printf("there are %d leap years\n", cnt_y);
	   printf("there are %d common years\n", cnt_n);
	   printf("Total days is %d", cnt_day);
   }*/
   /*
   int a;
   int b;
   int c;
   scanf("%d %d", &a, &b);
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
   printf("%d %d\n", a, b);*/
	char ch[7] = {1, 2, 3, 4, 5, 6, 7};
	printf("%d\n", ch[0]);
	printf("Hello\n");
   return 0;
}
/*bool jud(int i)
{
	if(i > 0)
	{
		return true;
	}else
	{

		return false;
	}
}*/
/*bool judgeleap(int year)
{
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}else
	{
		return false;
	}
}*/
