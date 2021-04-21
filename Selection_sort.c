#include <stdio.h>

int A[10];

int N=10;

int MIN(int K)
{
    int min = A[K];
    int LOC = K;
    for( int J=K+1; J<N; J++)
    {
        if (min>A[J])
        {
            min = A[J];
            LOC = J;
        }
    }
    return LOC;
}

void SELECTION()
{
    for(int K=0; K<N-1; K++)
    {
        int LOC = MIN(K);
        int TEMP;
        TEMP = A[K];
        A[K] = A [LOC];
        A[LOC] = TEMP;
    }
    return;

}

int main() {

    for(int i=0; i<10; i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=0; i<10; i++)
    {
        printf("%d\t",A[i]);
    }

    SELECTION();

    for(int i=0; i<10; i++)
    {
        printf("%d\t",A[i]);
    }


    return 0;
}
