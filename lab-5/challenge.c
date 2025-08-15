#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 1;

    int array[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &array[i]) != 1)
            return 1;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int counted = 0;
        
        for (int j = 0; j < i; j++)
        {
            if (array[j] == array[i])
            {
                counted = 1;
                break;
            }
        }
        if (counted)
            continue;

        for (int k = 0; k < n; k++)
        {
            if (array[k] == array[i])
                count++;
        }
        printf("Element %d occurs %d times\n", array[i], count);
    }

    return 0;
}