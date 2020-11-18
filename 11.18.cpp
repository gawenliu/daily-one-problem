/*
难度一
用户输入一个数字n和长为n的字符串，输出其中出现次数最多的所有字符
样例输入：
24
Comeon,class16babiess
样例输出：
s

难度二
用户输入一个数字n和长为n的字符串，输出其中出现次数第二多的所有字符
样例输入：
24
Comeon,theclass16babiess
样例输出：
e

难度三
用户输入一个数字n和长为n的字符串，对其中的所有字符按照出现次数从多到少进行排序并输出
样例输入：
7
sixteen
样例输出：
esixtn
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int num[127];
	int order[127] ;
	char string[1000],ch;
	int length,x,y,storage;
	for(x=0;x<126;x++)
	{
		num[x]=0;
		order[x]=x;
	}
	scanf("%s",string);
	length=strlen(string);
	for(x=0;x<length;x++)
	{
		for(y=0;y<126;y++)
		{
			if(string[x]-1==y)
			num[y]++;
		}
	}
	for(x=0;x<126;x++)
	{
		for(y=x+1;y<126;y++)
		{
			if(num[x]<num[y])
			{
				storage=order[x];
				order[x]=order[y];
				order[y]=storage;
			}
		}
	}
	x=0;
	while(1)
	{
		if(order[x]!=0)
		{
			ch=order[x]+1;
			printf("%c ",ch);
			printf("共%d次\n",num[order[x]]);
			x++;
		}
		else
		{
			break;
		}
	}
	return 0;
} 
