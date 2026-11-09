#include<stdio.h>
#include<stdlib.h>

int DisplayRangeEvenSum(int iStart , int iEnd)
{
    int iCnt = 0 , iSum = 0;

    // if((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    // {
    //     printf("Invalid Range");
    //     return;
    // }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum += iCnt;
        }
    }

    return iSum;


}


int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;
    printf("Enter the Starting Point : ");
    scanf("%d" , &iValue1);

    printf("Enter the Ending Point : ");
    scanf("%d" , &iValue2);
    
    iRet = DisplayRangeEvenSum(iValue1 , iValue2);
    printf("Sum of Even Range is : %d " , iRet);

    return EXIT_SUCCESS;
}