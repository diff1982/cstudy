#include <stdio.h>

int main()
{
	int num;
	printf("请输入一个整数（判断奇偶性）");
	scanf("%d",&num);
	int result = num%2;
	
	switch(result){
	
		case 0:
			printf("偶数");
			break;
		case 1:
			printf("奇数");
			break;
		default:
			;
		}
			
		
	
	return 0;
}
