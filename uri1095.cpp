#include<bits/stdc++.h>
using namespace std;
int main()
{
    int I,J;

    for(I=1,J=60;J>=0 ; )
    {
        printf("I=%d J=%d\n",I,J);
        I+=3;
        J-=5;
    }
    return 0;
}
