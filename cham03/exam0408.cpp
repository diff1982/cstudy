#include <stdio.h>

int main()
{
	int num;
	printf("������һ��������");
	scanf("%d",&num);
	
	if(num<-1)	
	{
		printf("û����Ŷ");
	}
	while(num-->0)
	{
		putchar('*');
	}
	putchar('\n');
	
	return 0;
}
