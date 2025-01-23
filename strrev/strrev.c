#include <stddef.h>

char *ft_strrev(char *str)
{
	int start;
	int end;
	char temp;

	if (!str)
		return NULL;
	start = 0;
	end = 0;
	while (str[end])
		end++;
	end--;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "42SP";

    printf("Antes: %s\n", str1);
    printf("Invertida: %s\n", ft_strrev(str1));

    printf("Antes: %s\n", str2);
    printf("Invertida: %s\n", ft_strrev(str2));

    return 0;
}
