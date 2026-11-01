#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary , int iYears)
{
    float fBonus = 0.0f;
    
    if((fSalary < 0) || (iYears < 0))
    {
        printf("Invalid Entry\n");
    }

    else if(iYears > 10)
    {
        fBonus = (fSalary * 0.15);
    }

    else if((iYears >= 5) && (iYears <= 10))
    {
        fBonus = (fSalary * 0.1);
    }

    else if(iYears < 5)
    {
        fBonus = (fSalary * 0.05);
    }

    else
    {
        printf("Invalid Entry\n");
    }

    printf("The Bonus is : %.2f" , fBonus);

}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter the Employee Salary :\n");
    scanf("%f" , &fSalary);

    printf("Enter Completed Year of Service :\n");
    scanf("%d" , &iYears);

    CalculateBonus(fSalary , iYears);

    return EXIT_SUCCESS;

}