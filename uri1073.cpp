#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i;
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d^%d = %d\n", i, 2, i*i);
        }
    }
    return 0;
}
