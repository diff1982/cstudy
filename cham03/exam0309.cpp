#include <stdio.h>

int main()
{
	int a,b,c,min;
	puts("������3�����֣��������ǵ���Сֵ��");
	printf("Num A:");
	scanf("%d",&a);
	printf("Num B:");
	scanf("%d",&b);	
	printf("Num C:");
	scanf("%d",&c);
	
	printf("Result is : %d ",(c<((a<b)?a:b)?c:((a<b)?a:b)));
	
	
	
	return 0;
}
