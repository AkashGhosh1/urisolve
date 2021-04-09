#include<stdio.h>
int main()


{
    int n,pn;

    scanf("%d %d",&n,&pn);

    if(n==1)
    {
        printf("Total: R$ %.2lf\n",pn*4.0);
    }
    else if(n==2)
    {
        printf("Total: R$ %.2lf\n",pn*4.5);
    }
    else if(n==3)
    {
        printf("Total: R$ %.2lf\n",pn*5.0);
    }
    else if(n==4)
    {
        printf("Total: R$ %.2lf\n",pn*2.0);
    }
    else if(n==5)
    {
        printf("Total: R$ %.2lf\n",pn*1.50);
    }


}
