#include <stdio.h>

int main()
{
	int numA,numB,result,retry;
	int tempA,tempB,tempResult;
	
	
	do{
		puts("������2������:");
		printf("����A��");
		scanf("%d",&numA);	
		tempA = numA;
		printf("����B��");
		scanf("%d",&numB);
		tempB = numB;
		do{					
			int tempaa = numA++;			
			int tempbb = numB--;			
			tempResult= tempaa + tempbb;			
			result += tempResult;
		}while(result>numA&&result<numB);		
		printf("����%d������%d֮�䣬�������ֵĺ���:%d",tempA,tempB,result);	
		printf("����һ��?...[yes...-1,no...0]");
		scanf("%d",&retry);
	}while(retry==-1);		
	return 0;
}
