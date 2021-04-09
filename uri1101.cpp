#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,N,sum=0;

    scanf("%d%d",&M,&N);

    while(M>=0 && N >=0)
    {
        if(M>N){
        for(int i=N;i<=M;i++)
        {
            sum=sum+i;
            printf("%d ",i);
        }
        printf("Sum=%d",sum);
        }
        if(N>M){
        for(int i=M;i<=N;i++)
        {
            sum=sum+i;
            printf("%d ",i);
        }
        printf("Sum=%d",sum);
        }
    }
    return 0;
}
