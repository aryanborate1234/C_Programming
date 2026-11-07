#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iINR = 0;
    iINR = (iNo * 70);
    return iINR;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number of USD :");
    scanf("%d" , &iValue);

    iRet =  DollarToINR(iValue);
    printf("Amount in INR is : %d", iRet);

    return EXIT_SUCCESS;
}