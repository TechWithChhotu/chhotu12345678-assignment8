#include<stdio.h>
int main()
{
	int i,j,N,a;
	printf("Enter value of N: ");
	scanf("%d",&N);
	for(i=0;i<N;i++){
		a=1;
		for(j=1;j<N*2;j++){
			if(j>N-i&&j<N+i)
			printf(" ");
			else{
				printf("%d",a);
			}
			if(j<N)
			a++;
			else
			a--;
		}
		printf("\n");
	}
return 0;
}

