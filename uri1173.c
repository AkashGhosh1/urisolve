#include<stdio.h>
int main()

{
    int x[10];
    int i,n,j;

    scanf("%d",&n);
    int k=n;
    for(j=0;j<10;j++)
    {
        printf("X[%d] = %d\n",j,k);
        k=k*2;
    }
    return 0;
}
