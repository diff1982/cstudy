#include <stdio.h>

int main()
{
	int numA,numB,result,retry;
	int tempA,tempB,tempResult;
	
	
	do{
		puts("请输入2个整数:");
		printf("数字A：");
		scanf("%d",&numA);	
		tempA = numA;
		printf("数字B：");
		scanf("%d",&numB);
		tempB = numB;
		do{					
			int tempaa = numA++;			
			int tempbb = numB--;			
			tempResult= tempaa + tempbb;			
			result += tempResult;
		}while(result>numA&&result<numB);		
		printf("数字%d到数字%d之间，所有数字的和是:%d",tempA,tempB,result);	
		printf("再试一次?...[yes...-1,no...0]");
		scanf("%d",&retry);
	}while(retry==-1);		
	return 0;
}
