#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the number of rows");
    scanf("%d", &rows);
    if (rows % 2 != 0)
    {
        for (i = 1; i <= (rows / 2) + 1; i++)
        {
            for (j = 1; j <= i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 1; i <= (rows / 2); ++i)
        {
            for (j = (rows / 2); j >= i; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        for (i = 1; i <= rows / 2; i++)
        {
            for (j = 1; j <= i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 1; i <= (rows / 2); ++i)
        {
            for (j = (rows / 2); j >= i; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
