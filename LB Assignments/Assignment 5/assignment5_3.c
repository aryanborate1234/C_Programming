#include<stdio.h>
#include<stdlib.h>

void CalculateStudentGrade(int Mark)
{
    if((Mark >= 0) && (Mark <= 100))
    {
        if((Mark >= 90) && (Mark <= 100))
        {
            printf("Marks : %d , Grade : A " , Mark);
        }

        else if((Mark >= 75) && (Mark <= 89))
        {
            printf("Marks : %d , Grade : B " , Mark);
        }

         else if((Mark >= 60) && (Mark <= 74))
        {
            printf("Marks : %d , Grade : C " , Mark);
        }

         else if((Mark >= 40) && (Mark <= 59))
        {
            printf("Marks : %d , Grade : D " , Mark);
        }

        else
        {
            printf("Marks : %d , Grade : FAIL " , Mark);
        }
    }
    else
    {
        printf("Invalid Marks");
    }
}

int main()
{
    int iMark = 0;
    printf("Enter the Marks : ");
    scanf("%d" , &iMark);

    CalculateStudentGrade(iMark);

    return EXIT_SUCCESS;
}