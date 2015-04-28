/*************************************************************************
	> File Name: my_strlen.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 五  4/10 22:26:19 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strlen(char *str);
int main(int argc, char* argv[])
{  
	int cnt;
	char str[20];
	while(memset(str, 0, sizeof(str)), fgets(str, 20, stdin) != NULL)
	{
      cnt = my_strlen(str);
	  
	  printf("my_strlen is %d\n", cnt);
	
	printf("strlen is %d\n", strlen(str));
	}
	return 0;
}
int my_strlen(char *str)
{
	int res;
	int i;
	res = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
			res++;
		if(str[i] == '\0')
		{
			break;
		}
	}
	return res;
}
