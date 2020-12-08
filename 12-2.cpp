/*今日题目
难度一
用户输入一个数，输出这个数的所有因数。
难度二
一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1+2+3.编程找出1000以内的所有完数。
*/
#include<stdio.h>
#include<math.h>
int main()
{
	long long num,a[10000],b[10000];
	int x=0,y=0,z=1;
	a[0]=1;
	scanf("%lld",&num);
	int sq=sqrt(num);
	for(x=1;x<=sq;x++)
	{
		if(num%x==0)
		{
			a[z]=x;
			b[z]=num/x;
			z++;
		}
	}
	for(y=1;y<z;y++)
	{
		printf("%d ",a[y]);
	}
	for(y=z-2;y>0;y--)
	{
		printf("%d ",b[y]);
	}
	return 0;
}
