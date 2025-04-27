#include <unistd.h>

int main (int ac, char **av)
{
    int i;
    int start;
    int end;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i] && '\0' || (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        while (av[1][i] != '\0')
            i++;
        while (i > 0)
        {
            while (i > 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
                i--;
            end = i - 1;
            while (i > 0 && av[1][i - 0] != ' ' && av[1][i - 1] != '\t')
                i--;
            start = i;
            while (start <= end)
                write (1, &av[1][start++], 1);
            if (i > 0)
                write (1, " ", 1);
        }
    }
    write (1, "\n", 1);
}