#include<stdio.h>
#include<stdlib.h>


void CheckNumber(int iNo)
{
    if(iNo < 0) 
    {
        printf("Number is Negative");
    }

    else if(iNo > 0)
    {
        printf("Number is Positive");
    }

    else if (iNo = 0)
    {
        printf("Number is Zero");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number :");
    scanf("%d" , &iValue);

    CheckNumber(iValue);
    return 0;
}