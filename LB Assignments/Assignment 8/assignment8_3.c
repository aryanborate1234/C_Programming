#include<stdio.h>
#include<stdlib.h>

int CheckFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo < 0)
    {
        (iNo = -iNo);
    }

    for(iCnt = 1 , iFact = 1 ; iCnt <= iNo ; iCnt ++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d" , &iValue);

    iRet = CheckFactorial(iValue);
    printf("Factorial of the number is : %d " , iRet);

    return EXIT_SUCCESS;
}