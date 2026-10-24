#include<stdio.h>
#include<stdlib.h>

void CheckGreater(int iNo1 ,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is Greater Number" , iNo1);
    }

    else
    {
        printf("%d is Greater Number" , iNo2);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the First Number :");
    scanf("%d" , &iValue1);

    printf("Enter the Second Number :");
    scanf("%d" , &iValue2);

    CheckGreater(iValue1,iValue2);
    return EXIT_SUCCESS;
}