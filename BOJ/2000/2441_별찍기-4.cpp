#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= (n - i); j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("*");
        printf("\n");
    }
}