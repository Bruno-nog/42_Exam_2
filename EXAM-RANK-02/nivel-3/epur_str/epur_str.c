#include <unistd.h>

int main (int ac, char **av)
{
    int i;
    char *s;

    s = av[1];
    i = 0;
    if (ac == 2)
    {
        while (s[i] == ' ' || s[i] == '\t')
            i++;
        while (s[i] != '\0')
        {
            if (s[i] == ' ' || s[i] == '\t')
            {
                if (s[i + 1] != ' ' && s[i + 1] != '\t' && s[i + 1] != '\0')
                    write (1, " ", 1);
            }
            else if (s[i] != ' ' && s[i] != '\t')
                write (1, &s[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}

