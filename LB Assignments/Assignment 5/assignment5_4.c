#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
    if((iNo % 3 ==0) && (iNo % 5 ==0))
    {
        printf("%d is Divisible by Both 3 and 5" , iNo);
    }

    else if(iNo % 3 ==0)
    {
        printf("%d is Divisible by 3 only",iNo);
    }

    else if(iNo % 5 ==0)
    {
        printf("%d is Divisible by 5 only",iNo);
    }
    else
    {
        printf("%d is not Divisible by either" , iNo);
    }
}

int main()
{

    int iValue = 0;
    printf("Enter the Value :");
    scanf("%d" , &iValue);

    CheckMultipleDivisibility(iValue);
    
    return EXIT_SUCCESS;
}