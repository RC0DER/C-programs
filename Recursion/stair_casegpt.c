#include<stdio.h>

int ways(int n, int m)
{
    int count[n + 1];
    int i, j;

    count[0] = 1;
    count[1] = 1;

    for (i = 2; i <= n; i++)
    {
        count[i] = 0;

        for (j = 1; j <= m && j <= i; j++)
            count[i] += count[i - j];
    }

    return count[n];
}

int main()
{
    int n, m;
    printf("Total number of steps: ");
    scanf("%d", &n);
    printf("\nMax number of steps in a step: ");
    scanf("%d", &m);
    printf("\nTotal number of ways: %d", ways(n, m));
    return 0;
}
