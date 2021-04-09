#include<stdio.h>
int main()

{
    int N[100];
    int i;
    double j;
    double t;

    scanf("%lf",&t);



    j=t;
    for(i=0;i<100;i++)
    {

        printf("N[%d] = %.4lf\n",i,j);
        j=j/2;
    }
    return 0;
}
