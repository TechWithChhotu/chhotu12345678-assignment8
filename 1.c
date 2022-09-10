#include<stdio.h>
int main()
{
	int N,i,j;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	while(j<=N){
		i=1;
		while(i<=j){
			printf("* ");
			i++;
		}
		printf("\n");
		j++;
	}
return 0;
}

