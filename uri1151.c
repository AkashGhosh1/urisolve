#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
     int first=0;
     int second=1;
     int fibo;
     int count=0;

    while(count < n-1)
    {
        if(count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ",fibo);
        count++;
    }
    printf("%d\n",first+second);
    return 0;
}
