#include <stdio.h>

int main()
{
	int a,b;
	puts("������2�����֣��������ǵĲ");
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
