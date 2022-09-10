#include<stdio.h>
int main()
{
	int N,i,j;
	printf("Enter the value fo N: ");
	scanf("%d",&N);
	for(i=N;i>0;i--){
		for(j=1;j<N+i;j++){
			if(j<=N-i)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
return 0;
}

