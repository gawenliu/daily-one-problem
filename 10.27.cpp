/*������Ŀ
�Ѷ�һ
�û�����һ�����֣��ж��Ƿ�Ϊ����
�������룺
9
���������
False

�Ѷȶ�
�û�����������a,b(Ĭ��a<=b),�����[a,b]��Χ�ڵ���������֮��
�������룺
3  6
���������
8

�Ѷ���
�û�����һ�������������жϸ����Ƿ�Ϊ����
�������룺
20200916666
���������
False*/
//�Ѷȶ� 
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
 //�Ѷ���
 //����С���� 
