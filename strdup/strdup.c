#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *dest;
    int i;

    i = 0;
    while (src[i] != '\0')
        i++;
    dest = malloc(sizeof (char) * (i + 1));
    if (dest == NULL)
        return NULL;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return (dest);
}
//MAIN ERRADO FEITO NA PROVA
int main ()
{
    char dest[20];
    char src[] = "abacate";

    printf("src: %s\n", src);
    printf("dest: %s\n", ft_strdup(dest));
}

// #include <stdio.h>
// int main (void)
// {
//     char *src = "original";
//     printf("src: %s dest: %s", src, ft_strdup(src));
//     free(ft_strdup(src));
//     return (0);
// }