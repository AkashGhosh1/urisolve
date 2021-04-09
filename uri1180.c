#include<stdio.h>
int main()

{
    int N,i,j,small;
    scanf("%d", &N);

    int X[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&X[i]);
    }

     small=X[0];
     int pos=0;
    for(j=1; j<N; j++)
    {
        if(small>X[j])
        {
            small=X[j];
            pos=j;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", small, pos);
    return 0;
}
