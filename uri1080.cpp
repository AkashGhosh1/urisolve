#include<stdio.h>
using namespace std;

int main()
{

    int n,i;
    scanf("%d",&n);

    int A[n],c=0;
    for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
    }

    int b=A[0];//5 7 2 3
    for(int i=1;i<n;i++)
    {
        if(b>A[i]){
        b = A[i];
        c=i+1;
        }
    }
   printf("Menor valor: %d\nPosicao: %d",b,c-1);
   return 0;
}
