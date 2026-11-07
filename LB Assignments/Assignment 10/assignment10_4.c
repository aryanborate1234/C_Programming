#include<stdio.h>
#include<stdlib.h>

double FhToCs(float fFahrenheit)
{
    float fCelcius = 0.0f;
    fCelcius = ((fFahrenheit - 32) * (0.5555));
    return fCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Temperature in Fahrenheit :");
    scanf("%f", &fValue);

    dRet =  FhToCs(fValue);
    printf("Temperature in Celcius is : %f Deg. Celcius" , dRet);


    return EXIT_SUCCESS;

}