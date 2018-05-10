#include <stdio.h>

int main()
{
	int num;
	printf("请输入一个正整数");
	scanf("%d",&num);
	
	if(num<-1)	
	{
		printf("没换行哦");
	}
	while(num-->0)
	{
		putchar('*');
	}
	putchar('\n');
	
	return 0;
}
