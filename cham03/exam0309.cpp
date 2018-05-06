#include <stdio.h>

int main()
{
	int a,b,c,min;
	puts("请输入3个数字，返回它们的最小值：");
	printf("Num A:");
	scanf("%d",&a);
	printf("Num B:");
	scanf("%d",&b);	
	printf("Num C:");
	scanf("%d",&c);
	
	printf("Result is : %d ",(c<((a<b)?a:b)?c:((a<b)?a:b)));
	
	
	
	return 0;
}
