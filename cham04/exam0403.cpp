#include <stdio.h>

int main()
{
	int num;
	printf("������һ������:");
	scanf("%d",&num);
	
	while(num>0)
	{
		printf("%d.",num);
		num--;
	}
	printf("û����Ŷ");
	return 0;
}
