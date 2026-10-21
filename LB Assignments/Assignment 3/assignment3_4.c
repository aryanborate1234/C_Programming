#include<stdio.h>

void DisplayConvert(char cNo)
{

    //LowerCase to UpperCase
    
    if ((cNo >= 'a') && (cNo <='z') )
    {
        printf("UpperCase Letter is : %c\t" , (cNo - 32));
    }

    //UpperCase to LowerCase

    else if ((cNo >= 'A') && (cNo <='B'))
    {
        printf("LowerCase Letter is : %c\t" , (cNo + 32));
   
    }

}

int main()
{
    char cValue = 0;
    printf("Enter any character :");
    scanf("%c" , &cValue);

    DisplayConvert(cValue);


    return 0;
}