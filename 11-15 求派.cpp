//ÌâÄ¿ÃèÊö£ºÇóÅÉ
#include<stdio.h>
int main()
{
	double pai=0,a=1;
	for(double x=1;x<10000000000;x+=2)
	{
		if(a==1)
		{
			pai+=1/x;
			a=0;
		}
		else
		{
			pai-=1/x;
			a++;
		}
	}
	pai*=4;
	printf("%.12lf",pai);
	return 0;
}
