#include<stdio.h>
#include<stdlib.h>

double RectangleArea(double width , double height)
{
    double dAns = 0.0;
    dAns = width * height;
    return dAns;
}

int main()
{
    double dValue1 = 0.0 , dValue2 = 0.0 , dRet = 0.0;

    printf("Enter the Width of Rectangle :");
    scanf("%lf" , &dValue1);

    printf("Enter the Height of Rectangle :");
    scanf("%lf" , &dValue2);

    dRet = RectangleArea(dValue1,dValue2);
    printf("Area of Rectangle is : %lf",dRet);


    return EXIT_SUCCESS;
}