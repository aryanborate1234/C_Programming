#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks ,int iAge)
{
    if((fMarks >= 0) && (fMarks <=100) && (iAge >= 0))
    {
        if((fMarks >= 60) && (iAge >= 17))
        {
            printf("Eligible for the Admission");
        }
        else
        {
            printf("Not eligible for the Admission");
        }

    }
    else
    {
        printf("Invalid Criteria");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter the Marks :");
    scanf("%f", &fMarks);

    printf("Enter the Age :");
    scanf("%d",&iAge);

    CheckAdmission(fMarks , iAge);

    return EXIT_SUCCESS;
}
