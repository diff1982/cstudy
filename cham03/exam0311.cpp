#include <stdio.h>

int main()
{
	int a,b;
	
	puts("请输入3个数字，判断两个数的差与10比较：");
	printf("Num A:");
	scanf("%d",&a);
	printf("Num B:");
	scanf("%d",&b);	
	
	if((a-b)<10||(b-a)<10)
		printf("它们的差小于10");
	else
		printf("它们的差大于等于11");
	
	return 0;
}
