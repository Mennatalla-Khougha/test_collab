#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j, n;
    int tmp;
    if (size == 0)
        return;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
        for (n = 0; n < size; n++)
        {
            printf("%d", array[n]);
            if (n != size - 1)
                printf(", ");
        }
        printf("\n");
    }
}