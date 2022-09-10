#include<stdio.h>
#include<conio.h>
int main(){
	int i, j, k=1;
	for (i = 0; i <= 12;i++){
		for (j = 0; j <= 18; j++){
			
			if(i<=3){
				if(i==3){
					if(j>=0&&j<=5||j>=12&&j<=18)
					printf("*");
					else if(j==6)
					printf("MysirG");
				}
				else if (j >= 2-i && j <= 6+i || j >= 12-i && j <= 16+i)
					printf("*");
				else
					printf(" ");
			}
			
			else{
				if(j>=k&&j<=18-k)
				printf("*");
				else
				printf(" ");
			}
		}
		if(i>3)
		k++;
	printf("\n");
	}
	return 0;		
}

