#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int i,j;

    for(i=1;i<=num*4-1;i=i+4)
    {
        for(j=i;j<=i+2;j++)
        {
            printf("%d ",j);
        }
        printf("pum");
        printf("\n");
    }
    return 0;
}
