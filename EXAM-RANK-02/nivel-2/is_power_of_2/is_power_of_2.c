

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
}

#include <stdio.h>

int is_power_of_2(unsigned int n);

int main(void)
{
    printf("%d\n", is_power_of_2(2147483648));   // 1
    printf("%d\n", is_power_of_2(1234));   // 1
    printf("%d\n", is_power_of_2(1122));   // 0
    return 0;
}
