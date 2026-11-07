#include<stdio.h>
#include<stdlib.h>

double SquareMeter(double SquareFeet)
{
    double squaremeter = 0.0;
    squaremeter = (SquareFeet * 0.092903);
    return squaremeter;
    
}

int main()
{
    double dValue = 0.0 ;
    double dRet = 0.0;
    printf("Enter the Value in Square Feet :");
    scanf("%lf", &dValue);

    dRet = SquareMeter(dValue);
    printf("Area in Square Meter is : %lf", dRet);


    
    return EXIT_SUCCESS;

}