/*�Ѷ�һ
ʵ��һ���򵥼Ӽ�������
�������룺
5+3-1
���������
7

�Ѷȶ�
ʵ��һ���򵥼��������漰�Ӽ��˳���
�������룺
5+3*3
���������
14

�Ѷ���
ʵ��һ���򵥼��������漰�Ӽ��˳������������������
�������룺
(5-3)*(3+1)
�������:
8*/
//�Ѷ�һ  ֻ�мӼ��ţ�û����������ȼ���ֻ��Ҫ����˳������������ 
/*#include<stdio.h>
int main()
{
	double a,b;
	char string;
	scanf("%lf",&a);
	while(1)      //��һ����ѭ����ѭ������ 
	{
		scanf("%c",&string);
		if(string=='\n')    //��������ѭ�� 
		{
			break;
		}
		scanf("%lf",&b);
		if(string=='+')
		{
			a+=b;
		}
		else if(string=='-')
		{
			a-=b;
		}
	}
	printf("%lf",a);
	return 0; 
 }*/
 //�Ѷȶ� �漰���Ӽ��˳����˳������ȼ����ڼӼ����ʶ��Ƚ��г˳����㣬�����Ӽ�����
 #include<stdio.h>
 int main()
{
	char string [100],storage='X';
	int location=0,sum,num[100],x,y;
	scanf("%d",&num[location]);
	while(storage!='\n')
	{
		storage=getchar();
		if(storage=='\n')
		break;
		string[location]=storage;
		location++;
		scanf("%d",&num[location]);
	}
	for(x=0;x<location;x++)//���ѭ����ʽ���еĳ˳��������� 
	{
		if(string[x]=='*')
		{
			location--;
			num[x]*=num[x+1];//��num[x]��num[x+1]֮������һ���� 
			for(y=x;y<location;y++)//���������ֵ��������ǰ��һλ 
			{
				num[y+1]=num[y+2];
				string[y]=string[y+1]; 
			}
			x--; 
		}
		else if(string[x]=='/')
		{
			location--;
			num[x]/=num[x+1];
			for(y=x;y<location;y++)
			{
				num[y+1]=num[y+2];
				string[y]=string[y+1]; 
			}
			x--;
		}
	}
	sum=num[0];
	for(x=0;x<location;x++)//����ͼӼ���������� 
	{
		if(string[x]=='+')
		{
			sum+=num[x+1];
		}
		else if(string[x]=='-')
		{
			sum-=num[x+1];
		}
	}
	printf("%d",sum);
	return 0;
 } 
 //�Ѷ����������沨����������õ�ջ�����ݽṹ
