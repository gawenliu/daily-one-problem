/*今日题目难度一
用户输入十个数字，输出其中最大的数字
难度二
用户输入十个数字，输出其中第二大的数字
难度三
用户输入十个数字，输出其中第五大的数字*/
//冒泡排序 
#include<stdio.h>
int main()
{
	int num[10],x,y,storage;//storage用于储值交换 
	for(x=0;x<10;x++)//输入十个数 
	{
		scanf("%d",&num[x]);
	}
	for(x=0;x<10;x++)//从第一个数开始 
	{
		for(y=x+1;y<10;y++)
		{
			if(num[x]>num[y])//如果num[x]>num[y]则交换两者的值 
			{
				storage=num[x];
				num[x]=num[y];
				num[y]=storage;
			}
		}
	}
	for(x=0;x<10;x++)
	{
		printf("%d\n",num[x]);
	}
	return 0;
}
