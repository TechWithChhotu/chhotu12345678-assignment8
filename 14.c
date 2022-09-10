#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			if(i==j||i==N||j==1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
return 0;
}

