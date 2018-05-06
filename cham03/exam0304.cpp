#include <stdio.h>

int main()
{
	int a,b;
	puts("输入两个整数：");
	printf("数字a：");
	scanf("%d",&a);
	printf("数字b：");
	scanf("%d",&b);
	
	if(a>b)
		printf("A大于B");
	else
		printf("A小于B");
	
	return 0;
}
