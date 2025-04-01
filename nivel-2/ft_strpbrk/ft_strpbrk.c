#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	
	if (!s1 || !s2)
		return (0);
	while(*s1)
	{
		i = 0;
	   	while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
    const char *s1 = "hello world";
    const char *s2 = "od";

    char *result = ft_strpbrk(s1, s2);

    if (result)
        printf("Primeiro caractere encontrado: '%c'\n", *result); // Saída esperada: 'o'
    else
        printf("Nenhum caractere encontrado.\n");

    return (0);
}
