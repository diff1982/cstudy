#include <stdio.h>

int main()
{
	int num;
	puts("input a number (print * with the number of your input)");
	scanf("%d",&num);

	while(num>0)
	{
		printf("*\n");
		num--;
	}	

	return 0;
}