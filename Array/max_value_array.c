/*Max. and Min. value of array*/
#include<stdio.h>
int main()
{
    int max,min,n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    max=min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    printf("Maximum value : %d\n",max);
    printf("Minimum value : %d",min);
    
    return 0;
}