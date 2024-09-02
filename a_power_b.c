  /*a power b*/
  #include<stdio.h>
  int main()
  { 
    int a,b,i,result;
    printf("Enter the Number: ");
    scanf("%d",&a);
    printf("\nEnter the power: ");
    scanf("%d",&b);
    result=1;
    for(i=1;i<=b;i++)
    {
      result=result*a;
    }
    printf("a power b = %d",result);
    return 0;
  }