#include<stdio.h>
int main()

{
    int i,j,k,l,n;

    int A[2][2];



       int a=1;
       for()
        for(i=0;i<2;i++)
        {

            for(j=0;j<2;j++)
            {
                A[i][j]=a;
                a++;
            }
            a--;
        }

     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d  ",A[i][j]);
        }
        printf("\n");
    }


}
