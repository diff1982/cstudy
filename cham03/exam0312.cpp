#include <stdio.h>

int main()
{
	int num;
	printf("������һ���������ж���ż�ԣ�");
	scanf("%d",&num);
	int result = num%2;
	
	switch(result){
	
		case 0:
			printf("ż��");
			break;
		case 1:
			printf("����");
			break;
		default:
			;
		}
			
		
	
	return 0;
}
