/*������Ŀ

�Ѷ�һ
�û�����һ����ݣ��������Ķ����ж�����
�������룺
2021
���������
28

�Ѷȶ�
�û�����һ��ʱ�䣨����2020/10/2������������Ǹ���ĵڶ�����
�������룺
2020/1/1
���������
1

�Ѷ���
�û�����һ��ʱ�䣨����2020/10/2����������������ڼ�
�������룺
2020/5/20
���������
������*/
#include<stdio.h>
#include<string.h> 
int main()
{
	int year,month,day,num=0,sum=0,x;
	scanf("%d/%d/%d",&year,&month,&day);
	for(x=1;x<year;x++)
	{
		if((x % 4 == 0 && x % 100 != 0) || (x%400==0 && x % 3200 != 0) || x % 172800 == 0)
		{
			sum+=366;
		}
		else
		{
			sum+=365;
		}
	}
	for(x=1;x<month;x++)
	{ 
		switch(x)
		{
			case 1:num+=31; break;
			case 2:if((year % 4 == 0 &&  year% 100 != 0) || (year%400==0 && year % 3200 != 0) || year % 172800 == 0)
		{
			num+=29;
		}
		else
		{
			num+=28;
		}
			break;
			case 3:num+=31;break;
			case 4:num+=30;break;
			case 5:num+=31;break;
			case 6:num+=30;break;
			case 7:num+=31;break;
			case 8:num+=31;break;
			case 9:num+=30;break;
			case 10:num+=31;break;
			case 11:num+=30;break;
		}
	}
	num+=day;
	sum+=num;
	printf("������%d��\n",sum);
	printf("��һ��ĵ�%d��\n",num);
	sum%=7;
	printf("����%d",sum);
	return 0; 
 } 

