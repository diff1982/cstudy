#include <stdio.h>

int main()
{
	int a,b;
	puts("请输入2个数字，返回它们的差：");
	printf("Num A:");
	scanf("%d",&a);
	printf("Num B:");
	scanf("%d",&b);
	
	if(a>=b)
		printf("Result is : %d",a-b);
	else
		printf("Result is : %d",b-a);
	
	
	return 0;
}
