/*************************************************************************
	> File Name: judge_1.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 二  4/ 7 16:06:41 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int cnt;
	int val;
	int res;
	int cnt_1;
	int cnt_0;
	cnt_1 = 0;
	cnt_0 = 0;
	scanf("%d", &val);
    if(val >= 0)	
	{
		for(cnt = 0; cnt <= 31; ++cnt)
		{
		res = val & (1 << cnt);
		if(res == 0)
		{
			++cnt_0;
		}	
		}
		cnt_1 = 32 - cnt_0;
		printf("1的个数：%d\n", cnt_1);
		printf("0的个数：%d\n", cnt_0);
	}else if(val < 0)
	{
		for(cnt = 0; cnt <= 31; ++cnt)
		{
		res = val & (1 << cnt);
		if(res == 0)
		{
			++cnt_0;
		}	
		}
		cnt_1 = cnt_0 + 2;
		cnt_0 = 32 - cnt_1;

	
		printf("1的个数：%d\n", cnt_1);
		printf("0的个数：%d\n", cnt_0);
	}
	return 0;
}
