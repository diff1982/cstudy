#include <stdio.h>

int main()
{
	int num;
	printf("����һ��������ӡ��ÿ�εݳ�2,ֱ����������С���б�");
	scanf("%d",&num);
	int i = 2;
	while(i<=num)
	{		
		printf("%d.",i);
		i= i*2;		
	}
	if(num<=0)
	{
		printf("û����Ŷ");
	}
	
	return 0;
}
