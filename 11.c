#include<stdio.h>

int main()
{
    int sp,N,i,j, alphabet,a;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    sp=N-1;

    for(i=1; i<=N; i++) {
        alphabet=65;
        for(j=1; j<N+i; j++) {
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
        sp--;
        a--;
    }
    return 0;
}
