/*Boolean search-> Given the array and a number 'k'. Find
out if 'k' lies in the array or not, if yes then print the
index*/
#include<stdio.h>
#include<stdbool.h>
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
    int idx=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    bool flag=false;
    printf("Enter the elements\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\nEnter the Element to be searched");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==true){
        printf("\n%d is present in array and it's index is %d",k,idx);
    }
    else printf("\n%d is not present in array",k);
    return 0;
}