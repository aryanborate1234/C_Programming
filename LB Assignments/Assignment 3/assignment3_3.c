#include<stdio.h>

void DisplayEvenFact(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
           if(iCnt % 2 == 0)
           {
            printf("%d\t" , iCnt);
           } 
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Value :");
    scanf("%d" , &iValue);

    DisplayEvenFact(iValue);



    return 0;
}