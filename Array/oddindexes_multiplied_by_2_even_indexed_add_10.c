/*Given an array of integers,change the value of all odd indexed
element to its second multiple and increment all even indexed
value by 10*/
#include<stdio.h> 
void fun( int ch[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==0 || i%2==0) ch[i]+=10;
        else ch[i]*=2;
    }
    return;
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
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    fun(arr,n);
    printf("New array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}