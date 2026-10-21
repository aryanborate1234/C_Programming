#include<stdio.h>


typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkVowel (char cChar)
{
    if((cChar == 'a') || (cChar == 'e') || (cChar == 'i') || (cChar == 'o') || (cChar == 'u') || (cChar == 'A') || (cChar == 'E') || (cChar == 'I') || (cChar == 'O') || (cChar == 'U'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }


}

int main()
{
    int cValue = 0;
    bool bRet = FALSE;

    printf("Enter Character :");
    scanf("%c" , &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}