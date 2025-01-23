#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t k;

    i = 0;
    k = 0;
    while (s[i] != '\0')
    {
        while (reject[k] != '\0')
        {
            if (reject[k] == s[i])
                return (i);
            k++;
        }
        k = 0;
        i++;
    }
    return (i);
}

#include <stdio.h>
#include <string.h>


int main() {
    const char *s = "hoello world";
    const char *reject = "od";

    size_t len = strcspn(s, reject);

    printf("Comprimento da substring inicial: %zu\n", len);
    return 0;
}
