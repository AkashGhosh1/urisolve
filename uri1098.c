#include<stdio.h>

int main()
{
double i,j;

for(i=0;i<=2;i+=0.2)
{
    for(j=1;j<=3;j++)
    {
        printf("i=%.1lf j=%.1lf\n",i,j+i);

    }
    printf("\n");
}
}
