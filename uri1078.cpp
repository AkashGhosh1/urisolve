#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=10; i++)
    {
        printf("%d x %d = %d", i, n, i*n);
        printf("\n");
    }

    return 0;
}
