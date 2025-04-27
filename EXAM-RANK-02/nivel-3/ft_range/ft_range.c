#include <stdlib.h>

int *ft_range(int start,int end)
{
    int *range;
    int size;
    int i;

    size = end - start + 1;
    range = (int *)malloc(sizeof (int) * size);
    if (!range)
        return (NULL);
    i = 0;
    while (i < size)
    {
        range[i] = start;
        start++;
        i++;
    }
    return (range);
}
#include <stdio.h>

int main()
{
    int start = 6;
    int end = 29;
    int *range;
    int i;

    range = ft_range(start, end);
    if (range)
    {
        for (i = 0; i < (end - start + 1); i++)
            printf("%d ", range[i]);
        free(range);
    }
    return 0;
}