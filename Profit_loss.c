/*To find whether the seller made profit or loss and how much*/
#include<stdio.h>
int main()
{
    int SP , CP , Profit , Loss ;
    printf("Input the Selling Price:");
    scanf("%d", &SP);
    printf("\nInput the Cost Price:");
    scanf("%d", &CP);
    if (SP>CP)
    {
        Profit = SP - CP ;
        printf("\nProfit : %d", Profit);
    }
    else 
    {
        Loss = CP - SP;
        printf("\nLoss : %d", Loss);
    }
    return 0;
}