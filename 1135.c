#include<stdio.h>
int main()
{
    int num;


    while(num!=4)
    {
       scanf("%d",&num);

       int cnt=0;
    printf("MUITO OBRIGADO\n");
    if(num==1)
    {
        printf("Alcool:%d",cnt);
        cnt=cnt+1;
    }
    else
        printf("Alcool:%d",cnt);



       if(num==2)
    {
        printf("Gasolina:%d",cnt);
        cnt=cnt+1;
    }
     else
        printf("Gasolina:%d",cnt);



       if(num==3)
    {
        printf("Diesel:%d",cnt);
        cnt=cnt+1;
    }
     else
        printf("Diesel:%d",cnt);

       if(num==4)
       {
           return 0;
       }

    }

}
