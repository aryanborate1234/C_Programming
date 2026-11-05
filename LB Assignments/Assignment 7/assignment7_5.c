#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    if((iNo == 0) || (iNo < 0))
    {
        printf("Invalid Number");
        return;
    }

    int iCnt = 0;

    for(iCnt = iNo ; iCnt <= (iNo * 5) ; iCnt = iCnt + iNo )
    {
        printf("%d\t" , iCnt);
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter the Number :");
    scanf("%d" , &iValue);
    
    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}