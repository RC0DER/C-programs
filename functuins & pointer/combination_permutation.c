/*Permutation and Combination*/
#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,r,ncr,npr;
    clrscr();
    printf("Enter the superscrupt(n): ");
    scanf("%d",&n);
    printf("\nEnter the subscript(r): ");
    scanf("%d",&r);
    ncr= (fact(n))/((fact(r))*(fact(n-r))); //combination
    printf("\nThe combination is %d",ncr);
    npr= (fact(n))/(fact(r)); //permutation
    printf("\nThe permutation is %d",npr);
    return 0;
}