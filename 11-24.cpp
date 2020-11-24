/*难度一
鸡兔同笼，鸡兔一共35只。笼子里脚一共94只,请问分别有多少只鸡和兔？ 
难度二
鸡兔同笼，有100只脚，请问有多少种组合？
*/
#include<stdio.h>
int main()
{
	int chook,rabbit,leg1,leg2,sum;
	printf("请输入头的数量：");
	scanf("%d",&sum);
	printf("请输入jio的数量：");
	scanf("%d",&leg2);
	for(chook=0;chook<=sum;chook++)
	{
		rabbit=sum-chook;
		leg1=2*chook+4*rabbit;
		if(leg1==leg2)
		{
			printf("有%d只鸡，%d只兔",chook,rabbit);
			break;
		}
	}
	return 0;
}
