#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    int iBill = 0;

    if(iUnits <= 0)
    {
        printf("Invalid unit");
    }

    else if(iUnits <= 100)
    {
        iBill = (iUnits *  5);
    }
    else if(iUnits <= 200)
    {
        iBill = ((100 * 5) + ((iUnits - 100) * 7));
    }
    else if(iUnits > 200)
    {
        (iBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10));
    }

    printf("Total Bill in Rs. %d" , iBill);
    }

int main()
{
    int iUnits = 0;
    printf("Enter the Units you were Consumed :");
    scanf("%d" , &iUnits);

    CalculateElectricityBill(iUnits);
    return EXIT_SUCCESS;
}