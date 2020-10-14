#include<stdio.h>
int main()
{
	int x=0,y=0,z=0;
	int wei[20];
	scanf("%d",&x);
	while(x!=0)
	{
		wei[y]=x%10;
		x/=10;
		y++;
	} 
	for(x=0;x<y;x++)
	{
		z+=wei[x];
	}
	y=0;
	while(z!=0)
	{
		wei[y]=z%10;
		z/=10;
		y++;
	}
	y--;
	for(x=y;x>=0;x--)
	{
		switch(wei[x])
		{
			case 1:printf("yi");break; 
			case 2:printf("er");break; 
			case 3:printf("san");break; 
			case 4:printf("si");break; 
			case 5:printf("wu");break; 
			case 6:printf("liu");break; 
			case 7:printf("qi");break; 
			case 8:printf("ba");break; 
			case 9:printf("jiu");break; 
			case 0:printf("ling");break; 
		}
		if(x==2)
		printf("bai");
		else if(x==1)
		printf("shi"); 
	}
	return 0;
}
