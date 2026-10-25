#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int year)
{
    if(year <= 0)
    {
        printf("Invalid Year");
    }
    else if(((year % 400) == 0) || ((year % 4 ==0) && (year % 100 != 0)))
    {
        printf("%d is the Leap Year" ,year);
    }
    else
    {
        printf("%d Not a Leap Year" , year);
    }
}

int main()
{
    int iYear = 0;
    printf("Enter the Year :");
    scanf("%d" , &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}