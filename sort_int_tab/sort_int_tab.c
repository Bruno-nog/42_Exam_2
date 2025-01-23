void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    int temp;

    if (size < 2)
        return;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}
