/*������Ŀ�Ѷ�һ
�û�����ʮ�����֣����������������
�Ѷȶ�
�û�����ʮ�����֣�������еڶ��������
�Ѷ���
�û�����ʮ�����֣�������е���������*/
//ð������ 
#include<stdio.h>
int main()
{
	int num[10],x,y,storage;//storage���ڴ�ֵ���� 
	for(x=0;x<10;x++)//����ʮ���� 
	{
		scanf("%d",&num[x]);
	}
	for(x=0;x<10;x++)//�ӵ�һ������ʼ 
	{
		for(y=x+1;y<10;y++)
		{
			if(num[x]>num[y])//���num[x]>num[y]�򽻻����ߵ�ֵ 
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
