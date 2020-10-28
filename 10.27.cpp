/*今日题目
难度一
用户输入一个数字，判断是否为素数
样例输入：
9
样例输出：
False

难度二
用户输入两个数a,b(默认a<=b),输出在[a,b]范围内的所有素数之和
样例输入：
3  6
样例输出：
8

难度三
用户输入一个超大整数，判断该数是否为素数
样例输入：
20200916666
样例输出：
False*/
//难度二 
#include<stdio.h>
int main()
{
	long long int num1,num2,i,storage,x,sum=0;
	scanf("%lld",&num1);
	scanf("%lld",&num2);
	for(;num1<=num2;num1++)
	{
		storage=num1/2+1;
		x=0;
		if(num1==2)
		{}
		else if(num1==1)
		{
			x=1;
		}
		else{
		for(i=2;i<=storage;i++)
		{
			if(num1%i==0)
			{
				x++;
			}
		}}
		if(x==0)
		{
			sum+=num1;
		}
	}
	printf("%lld",sum);
	return 0;
 }
 //难度三
 //费马小定理 
