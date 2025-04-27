#include <stdlib.h>
#include <stdio.h>

void pgcd(int a, int b)
{
    int i = 1;
    int pgc = 0;

    while (i < a && i < b)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
        i++;
    }
    printf("%d", gcd);
}

int main (int ac, char **av)
{
    if (ac == 3)
        pgcd(atoi(av[1], atoi(av[2])));
    printf("\n");
}