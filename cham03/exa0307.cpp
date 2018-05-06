#include <stdio.h>

int main()
{
	int a,b,c,d,max;
	puts("请输入4个数字，返回最大值：");
	printf("Num A:");
	scanf("%d",&a);
	printf("Num B:");
	scanf("%d",&b);
	printf("Num C:");
	scanf("%d",&c);
	printf("Num D:");
	scanf("%d",&d);
	
	if(a>b)
		max = a;
	else
		max = b;
	if(max>c)
		;
	else
		max = c;
	if(max>d)
		;
	else
		max = d;
	
	printf("Result is : %d ",max);
	return 0;
	
}
