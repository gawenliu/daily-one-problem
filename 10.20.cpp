/*难度一
实现一个简单加减计算器
样例输入：
5+3-1
样例输出：
7

难度二
实现一个简单计算器，涉及加减乘除。
样例输入：
5+3*3
样例输出：
14

难度三
实现一个简单计算器，涉及加减乘除并包含括号运算符。
样例输入：
(5-3)*(3+1)
样例输出:
8*/
//难度一  只有加减号，没有运算符优先级，只需要按着顺序整就完事了 
/*#include<stdio.h>
int main()
{
	double a,b;
	char string;
	scanf("%lf",&a);
	while(1)      //用一个死循环来循环输入 
	{
		scanf("%c",&string);
		if(string=='\n')    //用来跳出循环 
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
 //难度二 涉及到加减乘除，乘除的优先级高于加减；故而先进行乘除运算，再做加减运算
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
	for(x=0;x<location;x++)//这个循环对式子中的乘除进行运算 
	{
		if(string[x]=='*')
		{
			location--;
			num[x]*=num[x+1];//把num[x]和num[x+1]之积看作一个数 
			for(y=x;y<location;y++)//将后面的数值，符号往前移一位 
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
	for(x=0;x<location;x++)//这里就加减运算就完了 
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
 //难度三可以用逆波兰解决，会用到栈的数据结构
