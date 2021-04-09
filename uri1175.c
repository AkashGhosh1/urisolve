#include<stdio.h>
int main()

{
    int N[20];

    int i,j,temp;
    for(i=0;i<20;i++)
    {
    scanf("%d",&N[i]);
    }

    for(i=0,j=20-1;i<j;i++,j--)
    {
        temp=N[i];
        N[i]=N[j];
        N[j]=temp;
    }
    for(i=0;i<20;i++){
    printf("N[%d] = %d\n",i,N[i]);
    }

}
