/*������Ŀ
�Ѷ�һ
�û�����һ��������������������������
�Ѷȶ�
һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1+2+3.����ҳ�1000���ڵ�����������
*/
#include<stdio.h>
#include<math.h>
int main()
{
	long long num,a[10000],b[10000];
	int x=0,y=0,z=1;
	a[0]=1;
	scanf("%lld",&num);
	int sq=sqrt(num);
	for(x=1;x<=sq;x++)
	{
		if(num%x==0)
		{
			a[z]=x;
			b[z]=num/x;
			z++;
		}
	}
	for(y=1;y<z;y++)
	{
		printf("%d ",a[y]);
	}
	for(y=z-2;y>0;y--)
	{
		printf("%d ",b[y]);
	}
	return 0;
}
