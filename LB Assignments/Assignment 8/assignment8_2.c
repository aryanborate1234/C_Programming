#include<stdio.h>
#include<stdlib.h>

void DigitToWord(int iNo)
{

        if(iNo == 0)
        {
            printf("ZERO");
        }

        
        else if(iNo == 1)
        {
            printf("ONE");
        }

        
        else if(iNo == 2)
        {
            printf("ZERO");
        }

        else if(iNo == 3)
        {
            printf("TWO");
        }

        
        else if(iNo == 4)
        {
            printf("FOUR");
        }

        
       else if(iNo == 5)
        {
            printf("FIVE");
        }

        
        else if(iNo == 6)
        {
            printf("SIX");
        }

        
        else if(iNo == 7)
        {
            printf("SEVEN");
        }

        
        else if(iNo == 8)
        {
            printf("EIGHT");
        }

        
        else if(iNo == 9)
        {
            printf("NINE");
        }

        else

         {
            printf("INVALID NUMBER");
        }
}

int main()
{

    int iValue = 0;
    printf("Enter the Number :");
    scanf("%d" , &iValue);

    DigitToWord(iValue);

    return EXIT_SUCCESS;
}