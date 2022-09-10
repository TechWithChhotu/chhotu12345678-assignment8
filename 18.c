#include<stdio.h>
int main()
{
	int i,j,k,N;
	printf("Enter number of Row: ");
	scanf("%d",&N);
	for(i=0,k=0;i<N;i++){
		for(j=1;j<=N;j++){
			if(j>=(N/2+1)-k&&j<=(N/2+1)+k)
			printf("*");
			else
			printf(" ");
		}
		if(i<N/2-1)
		k++;
		else
		k--;
		printf("\n");
	}
return 0;
}

