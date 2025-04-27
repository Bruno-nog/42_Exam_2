int max(int *tab, unsigned int len)
{
    int first;
    unsigned int i;

    i = 0;
    if (len == 0)
        return (0); 
    first = tab[0];
    while (i < len)
    {
        if (first < tab[i])
            first = tab[i];
        i++;
    }
}
