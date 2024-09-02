/*Rotate the given array 'a' by 'k' steps, Where 'k' is 
non negative */
#include<stdio.h>
void pal( int arr[],int si, int ei)
{
    for(int i=si,j=ei;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    } 
    return;
}
int main()
{
    int n,k;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++) scanf("%d",&arr1[i]);
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr1[i]);
    printf("\nEnter the steps to be rotated");
    scanf("%d",&k);
    k = k % n ;
    pal(arr1,0,n-1);
    pal(arr1,0,k-1);
    pal(arr1,k,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}