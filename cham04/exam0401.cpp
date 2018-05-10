#include <stdio.h>

int main()
{
	int retry;
	do{
		int num;
		
		printf("请输入一个数字（判断是否是整数?999退出）");
		scanf("%d",&num);
		if(num>0){
			printf("输入的是一个正数");
		}else if(num<0){
			printf("输入的是一个负数"); 
		}else if(num==0){
			printf("输入的是0");
		}		
		printf("需要再来一次么？【yes...0，No...1】\n");
		scanf("%d",&retry);
	}while(retry==0);	
	
	
	return 0;
}
