#include <stdio.h>

int main()
{
	int num;
	printf("输入一个数（打印出每次递增2直到输入数大小的列表）");
	scanf("%d",&num);
	int i = 2;
	while(i<=num)
	{		
		printf("%d.",i);
		i++;		
		i++;
	}
	if(num<=0)
	{
		printf("没换行哦");
	}
	
	return 0;
}
