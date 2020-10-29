/*
今日编程题
难度一
用户输入三个数字，输出这三个数字的所有组合中最大的数字
样例输入：
9 8 7
样例输出：
987

难度二
用户输入n并依次输入n个数字，输出这n个数字的所有组合中最大的数字
样例输入：
4
1 1 2 3
样例输出：
3211

难度三
用户输入n并依次输入n个数字，输出这n个数字的所有组合中第二大的数字
样例输入：
4
1 1 2 3
样例输出：
3121
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char num[100],storage;
	int length,x,y,z;
	scanf("%s",num);
	length=strlen(num);
	for(x=0;x<length;x++)
	{
		for(y=x+1;y<length;y++)
		{
			if(num[x]<num[y])
			{
				storage=num[x];
				num[x]=num[y];
				num[y]=storage;
			}
		}
	}
	x=length-1;
	y=x;
	while(1)
	{
		if(num[y]!=num[x])
		{
			storage=num[x];
			num[x]=num[y];
			num[y]=storage;
			break;
		}
		y--;
	}
	for(x=0;x<length;x++)
	{
		printf("%c",num[x]);
	}
	return 0;
} 
