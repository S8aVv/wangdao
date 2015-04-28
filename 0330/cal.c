/*************************************************************************
	> File Name: cal.c
	> Author: S8aVv.
	> Mail:shaw.xuan820@gmail.com 
	> Created Time: 一  3/30 20:16:06 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int left, right;
	char op;
	int ret;
	while(fflush(stdin),(ret = scanf("%d%c%d", &left, &op, &right)) != -1)
	{
		if(ret != 3)
		{
			continue;
		}else if(op == '+')
		{
           printf("%d%c%d=%d\n",left, op, right, left + right);
		}else if(op == '-')
		{
           printf("%d%c%d=%d\n",left, op, right, left - right);

		}else if(op == '*')
		{
           printf("%d%c%d=%d\n",left, op, right, left * right);

		}else if(op == '/')
		{
			if(right == 0)
			{
				printf("/0\n");
				continue;
			}else {
           printf("%d%c%d=%f\n",left, op, right, (double) left / right);
			}

		}else if(op == '%')
		{
			if(right == 0)
			{
				printf("/0\n");
				continue;
			}else
			{

              printf("%d%c%d=%d\n",left, op, right, left % right);
            }
		}
	}
	return 0;
}
