/*
今日题目
难度一
有个人上台阶，每步走剩余台阶的一半(若只剩余1阶，则走一阶)。用户输入总台阶数n，输出走完该台阶所需步数。
难度二
有个人上台阶，每步只走1阶或2阶。输入总台阶数n，输出这个人的走法有多少种。
难度三
有个人上台阶，每步走1阶或2阶或3阶。输入总台阶数n，输出这个人的走法有多少种。
*/
#include<stdio.h>
long long int plans[1000000];
int main()
{
	int jie;
	plans[1]=1;
	plans[2]=3;
	scanf("%d",&jie);
	for(int x=3;x<=jie;x++)
	{
		plans[x]=plans[x-1]+plans[x-2];
	}
	printf("%lld",plans[jie]);
	return 0;
}
