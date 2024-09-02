/*Print armstrong number to n*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,b,a,i,count,sum;
    printf("Enter the number to which armstrong number should bo printed: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        sum = 0;
        for(a=i;a>0;a=a/10)
        {
            count= count +1;
        }
        for(b=i;b>0;b=b/10)
        {
            num=b%10;
            sum=sum+(pow(num,count));

        }
        if(sum==i)
        {
            printf("%d  ",i);
        }
        else
        {
            continue;
        }
    } 
    return 0;
}