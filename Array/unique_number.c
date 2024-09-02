/*Find the unique number in a given array where all the 
elements are being repeated twice with one value being unique*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    bool flag=false;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\nThe unique element is: \n");
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
            }
        }
        if(flag==false){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}