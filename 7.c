#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	for(i=0;i<N;i++){
		for(j=1;j<=N*2;j++){
			if(j>N-i&&j<=N+i)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
return 0;
}

