#include<stdio.h>

int DivideNumbers(int iNo1 , int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = (iNo1 / iNo2);

    return iAns;
}


int main() 
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    
    printf("Enter the First Number :");
    scanf("%d" , &iValue1);

    printf("Enter the Second Number :");
    scanf("%d" , &iValue2);

    iRet = DivideNumbers(iValue1 , iValue2);

    printf("Division of Two Numbers is %d" , iRet);

    return 0;
}
