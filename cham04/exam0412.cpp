#include <stdio.h>

int main()
{
	int num;
	int numOfByte=0;
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
		numOfByte++;
	}
	printf("\nthe result of byte is: %d",numOfByte);
	puts(".");
	return 0;
}