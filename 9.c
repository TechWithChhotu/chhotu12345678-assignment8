#include<stdio.h>
int main()
{
	int i,j,N,a;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	for(i=N;i>0;i--){
		a=1;
		for(j=1;j<N+i;j++){
			if(j>N-i){
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

