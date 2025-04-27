#include <unistd.h>

void print_hex(int nb)
{
    char str[] = "0123456789abcdef";
    if (nb >= 16)
    {
        print_hex(nb / 16);

    }
    write (1, &str[nb % 16], 1);
}

int main (int ac, char **av)
{
    if (ac != 2)
    {
        write (1, "\n", 1);
        return (0);
    }
    int num = 0;
    int i = 0;

    while (av[1][i] >= '0' && av[1][i] <= '9')
    {
        num = num * 10 + (av[1][i] - '0');
        i++;
    }

    print_hex(num);
    write (1, "\n", 1);
    return (0);
}