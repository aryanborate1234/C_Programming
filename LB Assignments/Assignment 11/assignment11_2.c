#include<stdio.h>
#include<stdlib.h>

void DisplayEvenRange(int iNo1 , int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid Range");
        return;
    }

    for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    printf("Enter the Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter the Ending Point : ");
    scanf("%d" , &iValue2);

    DisplayEvenRange(iValue1 , iValue2);

    return EXIT_SUCCESS;
}