#include <stdio.h>

int main()
{
	int a,b,c,min;
	puts("������3�����֣�������Сֵ��");
	printf("Num A:");
	scanf("%d",&a);
	printf("Num B:");
	scanf("%d",&b);
	printf("Num C:");
	scanf("%d",&c);
	
	if(a>b)
		min = b;
	else
		min = a;
	if(min>c)
		min = c;
	else
		;
	
	printf("result is : %d",min);
	
	return 0;
}
