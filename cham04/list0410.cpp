#include <stdio.h>

int main()
{
	int num;
	do{
		printf("pleast input a nonnegative number:\n");
		scanf("%d",&num);
		if(num<=0)
			printf("\aplease don't input negative number");
	}while(num<=0);

	printf("result of reverse is :");
	while(num>0){
		printf("%d",num%10);
		num = num / 10;
	}
	puts(".");
	return 0;
}