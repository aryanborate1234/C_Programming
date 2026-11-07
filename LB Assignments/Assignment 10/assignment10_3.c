#include<stdio.h>
#include<stdlib.h>

int KmToMeter(int iDistKM)
{
    int iAns  = 0;
    iAns = (iDistKM * 1000);
    return iAns;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the Distance in KM :");
    scanf("%d", &iValue);

    iRet = KmToMeter(iValue);
    printf("Distance in Meter is : %d Meter" , iRet);

    
    return EXIT_SUCCESS;

}