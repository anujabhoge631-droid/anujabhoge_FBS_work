#include <stdio.h>

void main()
{
    int arr[10] = {10, 20, 30, 40};
    int n = 4;
    int element = 25;
    int pos = 3;
    int i;

    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = element;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}