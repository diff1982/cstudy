#include <stdio.h>

int main()
{
	int num;
	printf("请输入一个正数:");
	scanf("%d",&num);
	
	while(num>=1)
	{
		printf("%d.",num);
		num--;
	}
	if(num==0)
	{
		printf("没换行哦");		
	}
	
	return 0;
}
