#include<stdio.h>
#include<stdlib.h>

int CheckEligibility(int iNo)
{
    if(iNo >= 18)
    {
        printf("Eligible for Voting");    
    } 
    else if(iNo < 18)
    {
        printf("Not Eligible For Voting");
    }
    else{
        printf("Invalid Age");
    }


}

int main()
{
    int iAge = 0;
    printf("Enter the Age :");
    scanf("%d" , &iAge);

    CheckEligibility(iAge);
    return EXIT_SUCCESS;
}