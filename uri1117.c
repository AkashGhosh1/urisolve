#include<stdio.h>
int main()
{
    double n,ans;
    int d=0;

    double cnt=0;
    while(1)
    {
        scanf("%lf",&n);

    if(n>=0 && n<=10)
    {
        cnt=cnt+n;
        d++;
        if(d==2)
        {
            ans=cnt/2;
            printf("media = %.2lf\n",ans);
        }

    }
    else if(n>=0 && n<=10 && (int) n)
    {
        printf("novo calculo (1-sim 2-nao)");
    }
    else
     printf("nota invalida\n");
    }

}
