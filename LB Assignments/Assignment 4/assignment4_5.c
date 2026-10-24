#include<stdio.h>
#include<stdlib.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

bool CheckDivisibility(int iNo)
{
    if(iNo != 0)
    {
        if(iNo % 5 == 0)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter the Number :");
    scanf("%d" , &iValue);

    bRet = CheckDivisibility(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Divisible by 5" , iValue);
    }
    else
    {
        printf("%d is not Divisible by 5" , iValue);

    }
    return EXIT_SUCCESS;
}