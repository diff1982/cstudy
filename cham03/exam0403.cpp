#include <stdio.h>

int main()
{
	int num;
	printf("请输入一个正数:");
	scanf("%d",&num);
	
	while(num>0)
	{
		printf("%d.",num);
		num--;
	}
	printf("没换行哦");
	return 0;
}
