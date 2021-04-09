#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans=1,i;
    for(i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    printf("%d\n",ans);
    return 0;
}
