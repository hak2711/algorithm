#include <stdio.h>
#define MAX 1000001

int arr[MAX];
int n;

void quickSort(int left, int right)
{
    if (left >= right)
        return;

    int low = left + 1;
    int high = right;
    int pivot = left;
    int temp;

    do
    {
        while (arr[low] < arr[pivot])
            low++;

        while (arr[high] > arr[pivot])
            high--;

        if (low < high)
        {
            temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    } while (low < high);

    temp = arr[pivot];
    arr[pivot] = arr[high];
    arr[high] = temp;

    quickSort(left, high - 1);
    quickSort(high + 1, right);
}

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quickSort(0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}