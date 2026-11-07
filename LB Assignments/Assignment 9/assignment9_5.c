#include<stdio.h>
#include<stdlib.h>

int FactorialDiffn(int iNo)
{
    int iCnt = 0 , iOddFact = 0 , iEvenFact = 0 ,  iAns = 0;;

    if(iNo < 0)
    {
        (iNo = -iNo);
    }

    for(iCnt = 1 , iOddFact = 1 , iEvenFact= 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iCnt * iEvenFact;
        }

        if((iCnt % 2) != 0)
        {
            iOddFact = iCnt * iOddFact;
        }
    }

    iAns = (iEvenFact - iOddFact);
    
    return iAns;


}
int main()
{

    int iValue = 0 , iRet = 0;

    printf("Enter the Number :");
    scanf("%d" , &iValue);

    iRet = FactorialDiffn(iValue);
    printf("Factorial Difference of number %d is : %d " ,iValue,iRet);

    return EXIT_SUCCESS;
}