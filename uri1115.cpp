#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;

    while(1==1)
    {
        scanf("%d %d",&m,&n);

        if(m==0 || n==0)
        {
            break;
        }
        else if(m>0 && n>0)
            printf("primeiro\n");
        else if(m>0 && n<0)
            printf("quarto\n");

        else if(m<0 && n<0)
            printf("terceiro\n");

             else if(m<0 && n>0)
            printf("segundo\n");
    }
    return 0;
}
