#include<stdio.h>
int main()

{
    int i,j,l,a[15];
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
    }

    for(l=0;l<15;l++)
    {
    for(j=0;j<5;j++)
    {
        if(a[l]%2==0)
        {
            printf("par[%d] = %d\n",j,a[i]);
        }
         if(a[l]%2!=0)
        {
            printf("impar[%d] = %d\n",j,a[i]);
        }
    }
    }

}

