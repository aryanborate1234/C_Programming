#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cNo)
{
    if((cNo >= 'A') || (cNo <= 'Z'))
    {
        printf("UpperCase Alphabet");
    }
    else if((cNo >= 'a') || (cNo <= 'z'))
    {
        printf("LowerCase Alphabet");
    }
    if((cNo >= 0) || (cNo <= '9'))
    {
        printf("Digit");
    }

}

int main()
{
    char cValue = '\0';
    printf("Enter a Character :");
    scanf("%c" , &cValue);

    CheckCharacterType(cValue);


    return EXIT_SUCCESS;
}