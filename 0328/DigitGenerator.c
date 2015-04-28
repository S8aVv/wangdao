/*************************************************************************
	> File Name: DigitGenerator.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 六  3/28 10:15:05 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define maxn 100005
int ans[maxn];

int main(int argc, char* argv[])
{
	int T, n, m ,x, y;
	memset(ans, 0, sizeof(ans));
	for(m = 1; m < maxn; m++)
	{
		x = m;
		y = m;
		while(x > 0)
		{
            y += x % 10;
			x /= 10;
		}
		if(ans[y] == 0 || m < ans[y])
		{
			ans[y] = m;
		}
		scanf("%d", &T);
        while(T--)
		{
			scanf("%d", &n);
			printf("%d\n", ans[n]);
		}
	}
        return 0;

}
