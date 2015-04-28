/*************************************************************************
	> File Name: test.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 四  4/ 9 10:38:45 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int my_strlen(char *str);
int main(int argc, char* argv[])
{
	/*
	 *
	  char str[20]; // = "hello";
	//memset(str, 0, sizeof(str));
	//bzero(str, sizeof(str));
	while(memset(str, 0, sizeof(str)), scanf("%s", str) != EOF)
	//while(memset(str, 0, sizeof(str)), scanf("%s", &str) != EOF)
	{

	printf("%s", str);
	}
	//printf("sizeof(str): %d\n", sizeof(str));
	//printf("strlen(str): %d\n", strlen(str));*/
	/*int a;
	while(scanf("%d", a) != EOF)
	{

		printf("%d", a);
	}*/
	char str[5];
	int i;
	//while(memset(str, 0, sizeof(str)), fgets(str, 5, stdin) != NULL)
	//while(memset(str, 0, sizeof(str)), gets(str) != NULL)
//	{
//		puts(str);
//	}
		while(memset(str, 0, sizeof(str)), scanf("%s", str) != EOF)
	{
		for(i = 0; i <= 5; i++) //==>> printf("%s", str);
		printf("%c", str[i]);   //
	}
	/*int res;
	char str1[5];
	char str2[5];
	while(memset(str1, 0, sizeof(str1)), memset((str2), 0, sizeof(str2)), fgets(str1, 5, stdin) != NULL, fgets(str2, 5, stdin) != NULL)
	{
		puts(str1);
		puts(str2);
	}*/
	/*memset(str1, 0, sizeof(str1));
	memset(str2, 0, sizeof(str2));
	fgets(str1, 5, stdin);
	fgets(str2, 5, stdin);
    res = strcmp(str1, str2);
	if(res == 0)
	{
		printf("%s = %s", str1, str2);
	}else if(res > 0)
	{
		printf("%s > %s", str1, str2);
	}else
	{
		printf("%s < %s", str1, str2);
	}
		
	//strcpy(str2 , str1);*/
	return 0;
}
/*int my_strlen(char *str)
{
	int len = 0;
	int i;
	for(i = 0; str[i] != '\0', i++)
	{
		len++;
	}
	return len;
}*/
/*void my_strcpy(char* dest, char* src)
{
	while(*dest++ = *src++);// while(*dest != '\0')
	                        //{
							//  *dest = *src;
							//  dest++;
							//  src++
							//  }
}*/
/*void mystrcat(char *str1, char *str2)
{
	int i;
	int len = strlen(str);
	for(i = 0; i < strlen(str2); i++)
	{
		str1[len] = str[i];
		len++;
	}
	str1[len] = '\0';

}*/
