#include <stdio.h>

int main()
{
	int a,b,c;
	puts("������3�����֣��ж�ֵ�Ƿ���ȣ�");
	printf("Num A:");
	scanf("%d",&a);
	printf("Num B:");
	scanf("%d",&b);	
	printf("Num C:");
	scanf("%d",&c);
	
	if((a==b)&&(b==c))
		printf("������ֵ���");
	else if((a==b)||(b==c)||(a==c))
		printf("������ֵ���");
	else
		printf("����ֵ�������");
		
	return 0;
}
