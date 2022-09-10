#include<stdio.h>
int main()
{
	int i,j,N,alphabet;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		alphabet=65;
		for(j=1;j<N*2;j++){
			if(j>N-i&&j<N+i)
			printf(" ");
			else
			printf("%c",alphabet);
			if(j<N)
			alphabet++;
			else
			alphabet--;
		}
		printf("\n");
	}
return 0;
}

