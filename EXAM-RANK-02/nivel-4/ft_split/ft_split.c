#include <stdlib.h>
# define MAX_WORD_LENGTH 1000
# define MAX_WORDS 1000

char **ft_split (char *str)
{
    int str_index;
    int word_index;
    int char_index;
    char **res;

    str_index = 0;
    word_index = 0;
    res = (char **)malloc(sizeof(*res) * MAX_WORDS);
    while (str[str_index] == ' ' || str[str_index] == '\t' || str[str_index] == '\n')
        str_index++;
    while (str[str_index] != '\0')
    {
        if (str[str_index] > 32)
        {
            char_index = 0;
            res[word_index] = (char *)malloc(sizeof(char) * MAX_WORD_LENGTH);
            while (str[str_index] > 32)
            {
                res[word_index][char_index] = str[str_index];
                char_index++;
                str_index++;
            }
            res[word_index][char_index] = '\0';
            word_index++;
        }
        else
            str_index++;
    }
    res[word_index] = 0;
    return (res);
}

#include <stdio.h>


int	main(void)
{
	char **result = ft_split("Hello world this is ft_split");
	int i = 0;

	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
