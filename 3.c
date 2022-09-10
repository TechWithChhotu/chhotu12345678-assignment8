#include<stdio.h>
int main()
{
	int N,i,j;
	printf("Enter value of N: ");
	scanf("%d",&N);
	i=N;
	while(i){
		j=1;
		while(j<=i){
			printf("*");
			j++;
		}
		i--;
		printf("\n");
	}
return 0;
}

