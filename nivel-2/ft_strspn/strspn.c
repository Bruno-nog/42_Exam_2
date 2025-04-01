
#include <stddef.h>
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (*s)
    {
        while (accept[i] && *s != accept[i])
            i++;
        if (accept[i] == '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}


#include <string.h>
#include <stdio.h>

// int main() {
//     char s[] = "abcdef123";
//     char accept[] = "abcde";

//     size_t result = strspn(s, accept); // Retorna 5, pois "abcde" são válidos consecutivamente no início de `s`.
//     printf("%zu\n", result);
//     return 0;
// }

int main() {
    const char *s = "ab4cdef";
    const char *reject = "abcde";

    size_t len = strspn(s, reject);

    printf("Comprimento da substring inicial: %zu\n", len);
    return 0;
}
