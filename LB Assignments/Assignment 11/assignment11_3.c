#include<stdio.h>
#include<stdlib.h>

void DisplayRangeSum(int iStart , int iEnd)
{
    int iCnt = 0 , iSum = 0 ;

    if((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        printf("Invalid Range");
        return;
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    printf("%d\t" , iSum);
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    printf("Enter the Starting Point : ");
    scanf("%d" , &iValue1);

    printf("Enter the Ending Point : ");
    scanf("%d" , &iValue2);

    DisplayRangeSum(iValue1,iValue2);

    return EXIT_SUCCESS;
}