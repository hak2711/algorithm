#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j > (2 * (n - i) + i) || j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j > (2 * (n - i) + i) || j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}