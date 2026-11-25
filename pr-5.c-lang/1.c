#include <stdio.h>

int main()
{
    int a[100], size, i;

    printf("Enter the array size: ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Negative elements from an Array: ");

    for(i = 0; i < size; i++)
    {
        if(a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}