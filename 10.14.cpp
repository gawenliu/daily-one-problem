//读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
输入样例：
123456
输出样例：
er yi/
//1.0：不能处理较大的数值，需要控制输入范围
#include<stdio.h>
int main()
{
	int x=0,y=0,z=0;
	int wei[20];
	scanf("%d",&x);
	while(x!=0)
	{
		wei[y]=x%10;
		x/=10;
		y++;
	} 
	for(x=0;x<y;x++)
	{
		z+=wei[x];
	}
	y=0;
	while(z!=0)
	{
		wei[y]=z%10;
		z/=10;
		y++;
	}
	y--;
	for(x=y;x>=0;x--)
	{
		switch(wei[x])
		{
			case 1:printf("yi");break; 
			case 2:printf("er");break; 
			case 3:printf("san");break; 
			case 4:printf("si");break; 
			case 5:printf("wu");break; 
			case 6:printf("liu");break; 
			case 7:printf("qi");break; 
			case 8:printf("ba");break; 
			case 9:printf("jiu");break; 
			case 0:printf("ling");break; 
		}
		if(x==2)
		printf("bai");
		else if(x==1)
		printf("shi"); 
	}
	return 0;
}
//2.0，使用char数组输入：
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int wei[10];
	int x=0,y=0,z=0,len;
	scanf("%s",a);
	len=strlen(a);
	for(x=0;x<len;x++)
	{
		z+=a[x]-'0';
	}
	while(z!=0)
	{
		wei[y]=z%10;
		z/=10;
		y++;
	}
	y--;
	for(x=y;x>=0;x--)
	{
		switch(wei[x])
		{
			case 1:printf("yi");break; 
			case 2:printf("er");break; 
			case 3:printf("san");break; 
			case 4:printf("si");break; 
			case 5:printf("wu");break; 
			case 6:printf("liu");break; 
			case 7:printf("qi");break; 
			case 8:printf("ba");break; 
			case 9:printf("jiu");break; 
			case 0:printf("ling");break; 
		}
		if(x==2)
		printf("bai");
		else if(x==1)
		printf("shi"); 
	}
	return 0;
}
