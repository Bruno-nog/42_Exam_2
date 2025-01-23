#include <unistd.h>

int main (int ac, char **av)
{
    int i;
    int k;
    int l;
    char *s1;
    char *s2;

    s1 = av[1];
    s2 = av[2];
    i = 0;
    if (ac == 3)
    {
        while (s1[i])
        {
            k = 0;
            while (s2[k])
            {
                if (s1[i] == s2[k])
                {
                    l = 0;
                    while (l < i && s1[l] != s1[i])
                        l++;
                    if (l == i)
                    {
                        write (1, &s1[i], 1);
                        break;
                    }
                }
                k++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}