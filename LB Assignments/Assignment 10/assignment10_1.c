#include<stdio.h>
#include<stdlib.h>

#define PI 3.14
double CircleArea(float fRadius)
{
    double dAns = 0.0;
    dAns = (PI * fRadius * fRadius);
    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Radius :");
    scanf("%f" , &fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is : %f" , dRet);

    return EXIT_SUCCESS;
}