/*������Ŀ
�Ѷ�һ
һֻ���ӵ�һ���һ�����ӣ�֮��ÿ���ǰһ����һ������n�����ӹ����ӳԼ��죿
����:3
���:2

�Ѷȶ�
һȺ�����ų�һȦ����1��2��...n ��ţ�����mֻ���߳��֣�ֱ��ʣ�����һ�������Ǵ�����
���룺n m��n < 100��
��������γ��ֵĺ��ӱ��*/
//�Ѷ�һ 
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
	printf("����ǡ%d��",m);
	return 0;
}*/
//�Ѷȶ�
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
