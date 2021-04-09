#include<stdio.h>
int main()
{
    int n,cnt1=0,cnt2=0,cnt3=0;


    while(1)
    {
        scanf("%d",&n);

        if(n>=1 && n<=4)
        {
            if(n==1)
            {
                cnt1=cnt1+1;
            }
            if(n==2)
            {
                cnt2=cnt2+1;
            }
            if(n==3)
            {
                cnt3=cnt3+1;
            }
            if(n==4)
                break;
        }
    }

     printf("MUITO OBRIGADO\n");
     printf("Alcool: %d\n",cnt1);
     printf("Gasolina: %d\n",cnt2);
     printf("Diesel: %d\n",cnt3);
}
