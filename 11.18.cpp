/*
�Ѷ�һ
�û�����һ������n�ͳ�Ϊn���ַ�����������г��ִ������������ַ�
�������룺
24
Comeon,class16babiess
���������
s

�Ѷȶ�
�û�����һ������n�ͳ�Ϊn���ַ�����������г��ִ����ڶ���������ַ�
�������룺
24
Comeon,theclass16babiess
���������
e

�Ѷ���
�û�����һ������n�ͳ�Ϊn���ַ����������е������ַ����ճ��ִ����Ӷൽ�ٽ����������
�������룺
7
sixteen
���������
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
			printf("��%d��\n",num[order[x]]);
			x++;
		}
		else
		{
			break;
		}
	}
	return 0;
} 
