#include<stdio.h>
int main()

{
    double A,B,C;

    scanf("%lf %lf %lf",&A,&B,&C);
    double x,y,z;
    x=A*A;
    y=B*B;
    z=C*C;

    if((A >= B + C) || (B>=A+C) ||( C>=B+C))
    {
         printf("NAO FORMA TRIANGULO\n");
    }
    if((x == y + z)|| (y==x+z)||(z==x+y))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if((x > y + z )|| (y > x + z) || (z >x + y))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((x < y + z )|| (y < x + z) || (z < x + y))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(A==B && A==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((A==B && C!=A) || (A==C && A!=B) || (B==C && B!=A))
    {
        printf("TRIANGULO ISOSCELES\n");

    }

    return 0;

}
