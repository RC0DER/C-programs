/*Given an array containing elements from 1 to n except 
one element in this range is missing. Find the missing element*/
#include<stdio.h>

int main()
{
    int n,sum=0,tsum=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++) arr[i]=i+1;
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\nSum of element without missing term");
    for(int i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        tsum+=arr[i];
    }
    printf("\nThe missing term is %d",tsum-sum);
    return 0;
}


// Wrong code (samajh nhi aaya)  ;(