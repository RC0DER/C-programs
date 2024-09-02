/*WAP to find a duplicate element from a given array of
untegers*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\nThe duplicate elemets are given below: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]) printf("%d ",arr[i]);
        }
    }
    return 0;
}