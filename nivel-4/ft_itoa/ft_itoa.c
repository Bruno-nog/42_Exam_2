#include <stdlib.h>

char *ft_itoa(int nbr)
{
    char *str;
    int len;
    int tmp;
    int is_negative;

    is_negative = 0;
    len = 1;
    if (nbr < 0)
    {
        is_negative = 1;
        nbr = -nbr;
    }
    tmp = nbr;
    while (tmp != 0)
    {
        len++;
        tmp /= 10;
    }
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;
    str[len] = '\0';
    while (len > is_negative)
    {
        str[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    if (is_negative)
        str[0] = '-';
    return (str);
}