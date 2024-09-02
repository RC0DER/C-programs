/*you can go only downward and rightward*/
#include<stdio.h>
int ways(int cr,int cc,int er,int ec)
{
    int right,down,maze;
    if(cr==er || cc==ec) return 1;
    right=ways(cr,cc+1,er,ec);
    down=ways(cr+1,cc,er,ec);
    maze=right+down;
    return maze;
}
int main()
{
    int n,m,a;
    printf(" Number of rows of maze : ");
    scanf("%d",&n);
    printf(" Number of column of maze : ");
    scanf("%d",&m);
    a=ways(1,1,n,m);
    printf("\nTotal number of ways : %d",a);
    return 0; 
} 