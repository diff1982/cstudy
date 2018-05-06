#include <stdio.h>

int main()
{
	int a,b,c;
	puts("请输入3个数字，判断值是否相等：");
	printf("Num A:");
	scanf("%d",&a);
	printf("Num B:");
	scanf("%d",&b);	
	printf("Num C:");
	scanf("%d",&c);
	
	if((a==b)&&(b==c))
		printf("三个数值相等");
	else if((a==b)||(b==c)||(a==c))
		printf("有两个值相等");
	else
		printf("三个值都不相等");
		
	return 0;
}
