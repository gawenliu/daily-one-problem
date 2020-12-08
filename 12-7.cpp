/*今日题目
难度一
一只猴子第一天吃一个桃子，之后每天比前一天多吃一个，问n个桃子够猴子吃几天？
输入:3
输出:2

难度二
一群猴子排成一圈，按1，2，...n 编号，数到m只，踢出局，直到剩下最后一个猴子是大王。
输入：n m（n < 100）
输出：依次出局的猴子编号*/
//难度一 
/*#include<stdio.h>
#include<string.h>
int main()
{
	long long int sum[1000],oneday,n,m=1;
	sum[1]=1;
	oneday=2;
	for(;oneday<99;oneday++)
	{
		sum[oneday]=sum[oneday-1]+oneday;
	}
	scanf("%lld",&n);
	while(n>sum[m])
	{
		m++;
	}
	printf("可以恰%d天",m);
	return 0;
}*/
//难度二
#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,sum,num;
	int monkey[100];
	for(int x=0;x<100;x++)
	{
		monkey[x]=1;
	}
	scanf("%d%d",&n,&m);
	for(int x=0;x<n-1;x++)
	{
		sum=0;
		num=x;
		while(sum!=m)
		{
			num++;
			if(num==n)	num=0;
			if(monkey[num]!=0)
			{
				sum++;
			}
		}
		monkey[num]=0;
	}
	for(int x=0;x<n;x++)
	{
		if(monkey[x]!=0) printf("%d",x);
	}
	return 0;
}
