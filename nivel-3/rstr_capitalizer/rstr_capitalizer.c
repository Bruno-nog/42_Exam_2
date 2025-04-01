#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int x = 1;

    if (ac == 1)
        write (1, "\n", 1);
    while (av[x])
    {
        i = 0;
        while (av[x][i] != '\0')
        {
            if (av[x][i] >= 'A' && av[x][i] <= 'Z')
                av[x][i] = av[x][i] + 32;
            i++;
        }
        i = 0;
        while (av[x][i] != '\0')
        {
            if (av[x][i] >= 'a' && av[x][i] <= 'z')
            {
                if (av[x][i + 1] == ' ' || av[x][i + 1] == '\t' || av[x][i + 1] == '\0')
                    av[x][i] -= 32;
            }
            write (1, &av[x][i], 1);
            i++;
        }
        write (1, "\n", 1);
        x++;
    }
}