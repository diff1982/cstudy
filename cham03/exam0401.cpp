#include <stdio.h>

int main()
{
	int retry;
	do{
		int num;
		
		printf("������һ�����֣��ж��Ƿ�������?999�˳���");
		scanf("%d",&num);
		if(num>0){
			printf("�������һ������");
		}else if(num<0){
			printf("�������һ������"); 
		}else if(num==0){
			printf("�������0");
		}		
		printf("��Ҫ����һ��ô����yes...0��No...1��\n");
		scanf("%d",&retry);
	}while(retry==0);	
	
	
	return 0;
}
