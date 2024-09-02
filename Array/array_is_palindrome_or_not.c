/*If an array arr contains n elements, then check if the 
given array is a palindrome or not */
#include<stdio.h>
void pal( int arr[],int n)
{
    int i=0, j=n-1, a=0;
    while (i<j)
    {
        if(arr[i]!=arr[j]){
            a=0;
            break;
        }
        else a++;
        i++;
        j--;
    }
    if(a!=0) printf("\ngivrn array is a palendrome");
    else printf("\ngivrn array is not a palendrome");
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
    pal(arr1,n);
    return 0;
}