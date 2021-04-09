#include<stdio.h>

int main()
{
    int t,i,n;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);


        if(n==0)
        {
            printf("NULL\n");
        }

        else if(n%2!=0 && n<0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(n%2!=0 && n>0)
        {
            printf("ODD POSITIVE\n");
        }

        else if(n%2==0 && n<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(n%2==0 && n>0)
        {
            printf("EVEN POSITIVE\n");
        }
    }

    return 0;
}
