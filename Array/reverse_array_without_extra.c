/*A program to reverse the array without using any axtra
array*/
#include<stdio.h>
void rev( int arr[],int n)
{
    int i=0, j=n-1;
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("\nReversed array element\n");
    for(int k=0;k<n;k++) printf("%d ",arr[k]);
    return;
}
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++) scanf("%d",&arr1[i]);
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr1[i]);
    rev(arr1,n);
    return 0;
}