#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1); 
}

void ft_putnbr(int ac)
{
    if (ac > 9)
    {
        ft_putnbr(ac / 10);
        ft_putnbr(ac % 10);
    }
    else
        ft_putchar(ac + '0');
}

int main (int ac, char **av)
{
    (void)av;
    ac--;
    ft_putnbr(ac);
    write (1, "\n", 1);
    return (0);
}