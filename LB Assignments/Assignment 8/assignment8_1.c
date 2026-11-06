#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo < 0)
    {
        printf("----NEGATIVE INVALID NUMBER----");
    }

    if(iNo <= 50)
    {
        printf("----SMALL----");
    }

    else if((iNo >= 51) && (iNo <= 100))
    {
        printf("----MEDIUM----");
    }

    else if(iNo >= 101)
    {
        printf("----LARGE----");
    }

    else
    {
        printf("----INVALID NUMBER----");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter the Value :");
    scanf("%d" , &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}