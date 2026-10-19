#include<stdio.h>

void Display(int iNo1 , int iNo2) 
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo2 ; iCnt++)
    {
        printf("%d " ,iNo1);
    }

}

int main()
{
    int iPrint = 0;
    int iFreq = 0;

    printf("Enter the Number :");
    scanf("%d" ,&iPrint);

    printf("Enter the Frequency :");
    scanf("%d" ,&iFreq);
   
    Display(iPrint , iFreq);

    return 0;
}