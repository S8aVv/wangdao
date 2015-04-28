/*************************************************************************
	> File Name: MaterMindHints.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 六  3/28 09:34:59 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define maxn 1010
int main(int argc, char* argv[])
{
	int n, a[maxn], b[maxn];
	int kase = 0;
	int i, A, B, d;
	int c1, c2;
	while(scanf("%d", &n) ==1 && n)
	{
		printf("Game %d:\n", ++kase);
		for(i = 0;i < n; i++)
		{
			scanf("%d", a[i]);
		}
		while(1)
		{
			A = 0, B = 0;
			for(i = 0; i < n; i++)
			{
				scanf("%d", &b[i]);
				if(a[i] == b[i])
				{
					A++;
				}
			}if(b[0] == 0)
			{
				break;
			}for(d = 1; d<=9; d++)
			{
				for(i = 0; i < n; i++)
				{
					if(a[i] == d)
					{
						c1++;
					}
					if(b[0] == d)
					{
						c2++;
					}
				}
				if(c1 < c2)
				{
					B += c1;
				}else
				{
					B += c2;
				}

			}
			printf("   (%d, %d)\n", A, B - A);
		}
	}
      return 0;
}
