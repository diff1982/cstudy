#include <stdio.h>

int main()
{
	int a,b;
	
	puts("������3�����֣��ж��������Ĳ���10�Ƚϣ�");
	printf("Num A:");
	scanf("%d",&a);
	printf("Num B:");
	scanf("%d",&b);	
	
	if((a-b)<10||(b-a)<10)
		printf("���ǵĲ�С��10");
	else
		printf("���ǵĲ���ڵ���11");
	
	return 0;
}
