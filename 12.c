#include<stdio.h>

int main()
{
    int sp=0,N,i,j, alphabet,a;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    a=N*2;
    for(i=N; i>0; i--) {
        alphabet=65;
        for(j=1; j<a; j++) {
            if(sp>=j)
                printf(" ");
            else {
                printf("%c", alphabet);
                if(j<N)
                    alphabet++;
                else
                    alphabet--;
            }
        }
        printf("\n");
        sp++;
        a--;
    }
    return 0;
}
