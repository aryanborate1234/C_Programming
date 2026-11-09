#include<stdio.h>
#include<stdlib.h>


void DisplayReverseRange(int iStart , int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Entry ");
        return ;
    }

    for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
    {
        printf("%d\t" , iCnt);
    }

}

int main()

{

    int iValue1 = 0 , iValue2 = 0 ;
    printf("Enter the Starting and Ending Point : ");
    scanf("%d %d" , &iValue1,&iValue2);

    DisplayReverseRange(iValue1 , iValue2);

    return EXIT_SUCCESS;
}