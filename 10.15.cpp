/*
�Ѷ�һ
�����ƺ�ʮ����ת��������Ϊ��ԭ���ơ�ת����Ľ����Լ����֣����Ϊ��ת����Ľ��ơ�
����������2  10   11
���������3
�Ѷȶ�
�������ת��������Ϊ��ԭ���ơ�ת����Ľ����Լ����֣����Ϊ��ת����Ľ��ơ�
����������8  16   17
���������F
�Ѷ���
����������Ľ���ת��������Ϊ��ԭ���ơ�ת����Ľ����Լ����֣����Ϊ��ת����Ľ��ơ�
����������8  2   777777777777
���������111111111111111111111111111111111111
*/

//1.0
#include<stdio.h>
#include<string.h>
int main()
{
	int shuruwei[100];
	int shuchuwei[100];
	char shuru[100];
	char shuchu[100];
	int yuan,zhuan,zhi=0,length=0,x=0,y=0,z=0,h=1;
	scanf("%d",&yuan);
	scanf("%d",&zhuan);
	scanf("%s",shuru);
	length=strlen(shuru);
	for(x=length-1;x>=0;x--)
	{
		for(y=48;y<58;y++)
		{
			if(shuru[x]==y)
			{
				shuruwei[length-x-1]=y-48;
			}
		}
		for(y=65;y<91;y++)
		{
			if(shuru[x]==y)
			{
				shuruwei[length-x-1]=y-55;
			}
		}
		zhi+=shuruwei[length-x-1]*h;
		h*=yuan;
	}
	printf("%d\n",zhi);
	x=zhi;y=0;z=zhuan;
	while(x!=0)
	{
		shuchuwei[y]=x%z;
		x-=shuchuwei[y];
		x/=z;
		y++;
	}
	for(x=y-1;x>=0;x--)
	{
		if(shuchuwei[x]>=0&&shuchuwei[x]<=9)
		{
			shuchu[x]=shuchuwei[x]+48;
		}
		else if(shuchuwei[x]>=10&&shuchuwei[x]<=35)
		{
			shuchu[x]=shuchuwei[x]+55;
		}
		printf("%c",shuchu[x]);
	}
	return 0;
}
