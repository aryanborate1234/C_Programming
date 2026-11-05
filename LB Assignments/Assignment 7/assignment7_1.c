#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        (iNo = -iNo);
    }

    int i = 0;
    for(i = 1 ; i <= iNo ; i++)
    {
        printf("$\t*\t");
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Frequency :");
    scanf("%d" , &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}