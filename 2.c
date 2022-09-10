#include<stdio.h>
int main()
{
	int N,i=1,j,sp;
	printf("Enter a number: ");
	scanf("%d",&N);
	sp=(N-1);
	while(i<=N){
		j=1;
		while(j<=N){
			if(j<=sp)
			printf(" ");
			else
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		sp--;
	}
return 0;
}

