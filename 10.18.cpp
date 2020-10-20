/*难度一
编程实现幂运算：用户输入多组a和b，当输入0 0时输入结束；依次输出a的b次方(结果为int型)
输入样例：
3 3
2 2
0 0
输出样例：
27
4
难度二
编程实现幂运算，用户输入一组a和b；输出a的b次方的后两位(注意：a的b次方的结果为超大整数)
输入样例:
16 520
输出样例：
76
难度三
使用 快速幂 的方法实现难度二*/
//难度一
#include<stdio.h>
#include<math.h>
int main()
{
	double num1=1,num2,sum;
	while(num1!=0&&num2!=0)
	{
		scanf("%lf",&num1);
		scanf("%lf",&num2);
		sum=pow(num1,num2);
		printf("%g",sum);
	 } 
	return 0;
}
//难度二
#include<stdio.h>
int main(){
	int a,b,sum=1,result=0;
	int i=0;
	printf("底数和指数:");
	scanf("%d,%d",&a,&b);
	for(i=b;i>0;i--){
		sum*=a;
	}
	result=sum%100;
	printf("%d\n",result);
	return 0;
}
//难度三
#include<stdio.h>
long long fastPower(long long base, long long power) 
{
    long long result = 1;
    while (power > 0) {
        if (power % 2 == 1) {
            result = result * base % 100;
        }
        power = power / 2;
        base = (base * base) % 100;
    }
    return result;
}
int main()
{
	long long int fastpower,base,power;
	scanf("%ld",&base);
	scanf("%ld",&power);
	fastpower=fastPower(base,power);
	printf("%lld",fastpower);
	return 0;
}
//快速幂算法链接：https://blog.csdn.net/qq_19782019/article/details/85621386 
