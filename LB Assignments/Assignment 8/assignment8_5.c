#include<stdio.h>
#include<stdlib.h>

void DisplayReverseTable(int iNo)
{
    
    int iCnt = 0;
    
    if( iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t" , (iCnt * iNo));
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number :");
    scanf("%d" , &iValue);

    DisplayReverseTable(iValue);

    return EXIT_SUCCESS;
}