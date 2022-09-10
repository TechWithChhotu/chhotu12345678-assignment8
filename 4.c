#include<stdio.h>
int main()
{
	int N,i,j,sp=0;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	i=1;
	while(i<=N){
		j=1;sp=1;
		while(j<=N){
			if(sp<i)
			printf(" ");
			else
			printf("*");
			j++;
			sp++;
		}
		printf("\n");
		i++;
		
	}
return 0;
}

