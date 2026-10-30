#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(int iTotalPurchase)
{
    float iFinalPay = 0;

    if(iTotalPurchase <= 1000)
    {
        iFinalPay = (iTotalPurchase);
    }
    else if ((iTotalPurchase >= 1000) && (iTotalPurchase <= 5000))
    {
        iFinalPay = ((iTotalPurchase) - (iTotalPurchase * 0.10));
    }
    else if (iTotalPurchase > 5000)
    {
        iFinalPay = ((iTotalPurchase) - (iTotalPurchase * 0.20));
    }
    else
    {
        printf("Invalid Amount");
    }

    printf("Original Amount : %d\n " , iTotalPurchase);
    printf("After Apply Discount : %.2f\n ", iFinalPay);
}

int main()
{
    int iTotalPurchase = 0;
    printf("Enter the Total Purchase Amount :");
    scanf("%d" , &iTotalPurchase);

    CalculateDiscount(iTotalPurchase);

    return EXIT_SUCCESS;
}