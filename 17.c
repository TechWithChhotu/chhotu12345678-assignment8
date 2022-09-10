#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	for(i=N;i>=1;i--){
		for(j=1;j<N*2;j++){
			if(i==N||j==(N+1-i)||j==N+i-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
return 0;
}

