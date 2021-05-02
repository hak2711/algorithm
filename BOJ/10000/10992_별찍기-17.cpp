#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            for (int j = 1; j <= i; j++)
                printf("*");
            break;
        }

        for (int j = 1; j <= (n - i); j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
        {
            if (k == 1 || k == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}