#include <stdio.h>

int main()
{
	int  a,b;
	
	puts("Input two numbers:");
	printf("number a:");
	scanf("%d",&a);
	printf("number b:");
	scanf("%d",&b);
	
	if(a%b==0){
		printf("b是a的约数");
	}else{
		printf("b不是a的约数");
	}
	
	return 0;
}
