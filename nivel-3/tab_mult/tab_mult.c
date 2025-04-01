#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_atoi (char *str)
{
    int sign = 1;
    int res = 0;
    int i = 0;
    
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (sign * res);
}

void ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar (nb + '0');
}

int main (int ac, char **av)
{
    int i;
    int nb;

    i = 1;
    if (ac == 2)
    {
        nb = ft_atoi(av[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write (1, " x ", 3);
            ft_putnbr(nb);
            write (1, " = ", 3);
            ft_putnbr(nb * i);
            if (i < 9)
                write (1, "\n", 1);
            i++;
        }
    }
    write (1, "\n", 1);
}