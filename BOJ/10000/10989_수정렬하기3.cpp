#include <stdio.h>

int main(void)
{
    int temp;
    int count[10000] = {
        0,
    };
    int num;

    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int input;
        scanf("%d", &input);
        count[input - 1]++;
    }

    for (int i = 0; i < 10000; i++)
    {
        if (count[i] != 0)
        {
            for (int j = 0; j < count[i]; j++)
            {
                printf("%d\n", i + 1);
            }
        }
    }
}