/*Find the difference between the sum of elements at even
indices to th esum of elements of odd indices.*/
#include<stdio.h> 
int fun( int ch[],int n)
{
    int sum_even=0, sum_odd=0, diff;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) sum_even+=ch[i];
        else sum_odd+=ch[i];
    }
    return diff=sum_even-sum_odd;
}
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);;
    printf("\nfinal value : %d",fun(arr,n));
    return 0;
}