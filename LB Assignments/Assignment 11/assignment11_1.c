#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int iNo1 , int iNo2)
{
    int iCnt = 0;

    if(iNo2 < iNo1)
    {
        printf("Invalid Range");
        return;
    
    }

    for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt ++)
    {
        printf("%d\t" , iCnt);
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    printf("Enter Starting Point :");
    scanf("%d" , &iValue1);

    printf("Enter Ending Point :");
    scanf("%d" , &iValue2);

    DisplayRange(iValue1 , iValue2);

    return EXIT_SUCCESS;
}