#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool CheckDivisible(int iNo)
{
    if(iNo % 5 == 0)
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    int bRet = FALSE;

    printf("Enter the Number : \n");
    scanf("%d" , &iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == TRUE) {
        printf("%d Number is Divisible by 5" , iValue);
    }

    else
    {
        printf("%d Number is not Divisible by 5" , iValue);

    }

    return 0;
}