

void main()
{
    int a[5], n, i, j, value;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++)
    {
        if(a[i] == value)
        {
            for(j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }

            n--;
            break;
        }
    }

    printf("Array after deleting:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}