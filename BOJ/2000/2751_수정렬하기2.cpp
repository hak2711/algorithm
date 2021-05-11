#include <stdio.h>
#include <algorithm>

int number;
int array[1000001];

int main(void)
{
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    std::sort(array, array + number);

    for (int i = 0; i < number; i++)
    {
        printf("%d\n", array[i]);
    }
}