/*�Ѷ�һ
����ͬ��������һ��35ֻ���������һ��94ֻ,���ʷֱ��ж���ֻ�����ã� 
�Ѷȶ�
����ͬ������100ֻ�ţ������ж�������ϣ�
*/
#include<stdio.h>
int main()
{
	int chook,rabbit,leg1,leg2,sum;
	printf("������ͷ��������");
	scanf("%d",&sum);
	printf("������jio��������");
	scanf("%d",&leg2);
	for(chook=0;chook<=sum;chook++)
	{
		rabbit=sum-chook;
		leg1=2*chook+4*rabbit;
		if(leg1==leg2)
		{
			printf("��%dֻ����%dֻ��",chook,rabbit);
			break;
		}
	}
	return 0;
}
