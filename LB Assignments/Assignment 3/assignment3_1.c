#include<stdio.h>

void DisplayEven(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf("%d\t" , iCnt*2);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter the Value :");
    scanf("%d" , &iValue);

    DisplayEven(iValue);



    return 0;
}