/*Find the total number of triplets in the array whose sum is 
equal to the given value x*/
#include<stdio.h> 
void fun( int ch[],int n, int x)
{
    int sum_count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(ch[i]+ch[j]+ch[k]==x) sum_count++;
            }
        }
    }
    printf("The number of pairs  : %d",sum_count);
    return;
}
int main()
{
    int n,x;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the sum number\n");
    scanf("%d",&x);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    fun(arr,n,x);
    return 0;
}