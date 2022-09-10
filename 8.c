#include<stdio.h>
int main()
{
	int i,j,N,a;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	for(i=0;i<N;i++){
		a=1;
		for(j=0;j<=N+i;j++){
			if(j>=N-i){
				printf("%d",a);
				if(j<N)
				a++;
				else
				a--;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
return 0;
}

