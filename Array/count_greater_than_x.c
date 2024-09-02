/*Count the number of elements in given array greater than
a given number x*/
#include<stdio.h> 
int fun( int ch[],int n, int a)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ch[i]>a) count++;
    }
    return count;
}
int main()
{
    int n,x;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("counting begins from\n");
    scanf("%d",&x);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);;
    printf("number of element after %d is %d",x,fun(arr,n,x));
    return 0;
}