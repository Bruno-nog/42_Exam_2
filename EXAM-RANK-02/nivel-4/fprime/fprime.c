#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
    int i;
    
    i = 2;
	if (ac == 2)
    {
        if (nb == 1)
        {
            printf("1");
            return ;
        }
        while (nb >= i)
        {
            if (nb % i == 0)
            {
                printf("%d", i);
                if (nb != i)
                    printf("*");
                nb /= i;
                i--;
            }
            i++;
        }
    }
	printf("\n");
	return (0);
}
