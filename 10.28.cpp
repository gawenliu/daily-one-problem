/*
���ձ����
�Ѷ�һ
�û������������֣�������������ֵ������������������
�������룺
9 8 7
���������
987

�Ѷȶ�
�û�����n����������n�����֣������n�����ֵ������������������
�������룺
4
1 1 2 3
���������
3211

�Ѷ���
�û�����n����������n�����֣������n�����ֵ���������еڶ��������
�������룺
4
1 1 2 3
���������
3121
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char num[100],storage;
	int length,x,y,z;
	scanf("%s",num);
	length=strlen(num);
	for(x=0;x<length;x++)
	{
		for(y=x+1;y<length;y++)
		{
			if(num[x]<num[y])
			{
				storage=num[x];
				num[x]=num[y];
				num[y]=storage;
			}
		}
	}
	x=length-1;
	y=x;
	while(1)
	{
		if(num[y]!=num[x])
		{
			storage=num[x];
			num[x]=num[y];
			num[y]=storage;
			break;
		}
		y--;
	}
	for(x=0;x<length;x++)
	{
		printf("%c",num[x]);
	}
	return 0;
} 
