#include <stdio.h>

void main()
{
    int arr[5], i, num, found = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == num)
        {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Number not found");
    }
}