#include <stdio.h>

int main()
{
	int num;
	printf("������һ������:");
	scanf("%d",&num);
	
	while(num>=1)
	{
		printf("%d.",num);
		num--;
	}
	if(num==0)
	{
		printf("û����Ŷ");		
	}
	
	return 0;
}
