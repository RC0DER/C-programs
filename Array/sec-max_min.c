/*Second Max. and Min. value of array*/
#include<stdio.h>
int main()
{
    int max,min,smax,smin,n;
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
    max=min=smax=smin=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max) {
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]) smax = arr[i];
        if(arr[i]<min) {
            smin=min;
            min=arr[i];
        }
        else if(smin>arr[i] && min!=arr[i]) smin = arr[i];
    }
    printf("Second maximum value : %d\n",smax);
    printf("Secondary minimum value : %d",smin);
    
    return 0;
}