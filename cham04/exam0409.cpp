#include <stdio.h>

int main()
{
	int retry,num;

	puts("please input a number(print +&- use the number of you put in)");
	scanf("%d",&num);

	do{
		while(num>0)
		{
			if(num%2==0)
				printf("+");
			else
				printf("-");
			num--;			
		}
		printf("\n");
	}while(retry==-1);



	return 0;
}