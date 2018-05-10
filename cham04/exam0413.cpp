#include <stdio.h>

int main()
{
	int num = 0;
	int result = 0;
	printf("please input a number:\n");
	scanf("%d",&num);

	for(int i = 0;i<=num;i++)
	{
		result += i;
	}
	printf("the result is: %d \n",result);

	return 0;
}