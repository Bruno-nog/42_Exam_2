# include <stdarg.h>
# include <unistd.h>

int print_chr(char c)
{
    write(1, &c, 1);
    return (1);
}

int    print_str(char *str)
{
    int    count = 0;

    if (!str)
        return (print_str("(null)"));
    while (*str)
    {
        count += print_chr(*str);
        str++;
    }
    return (count);
}

int    print_nbr(int nbr)
{
    long    num = (long)nbr;
    int        count = 0;

    if (num < 0)
    {
        count += print_chr('-');
        num = -num;
    }
    if (num >= 10)
    {
        count += print_nbr(num / 10);
        count += print_nbr(num % 10);
    }
    else
        count += print_chr(num + '0');        
    return (count);
}

int    print_hex(unsigned int n, const char *base)
{
    int    count = 0;

    if (n >= 16)
    {
        count += print_hex(n / 16, base);
        count += print_hex(n % 16, base);
    }
    else
        count += print_chr(base[n]);
    return (count);
}

int print_arg(va_list args, char spec)
{
    int    count = 0;

    if (spec == 's')
        count += print_str(va_arg(args, char *));
    else if (spec == 'd')
        count += print_nbr(va_arg(args, int));
    else if (spec == 'x')
        count += print_hex(va_arg(args, unsigned int), "0123456789abcdef");
    else if (spec == 'X')
        count += print_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
    return (count);
}

int ft_printf(const char *format, ...)
{
    va_list    args;
    int    count = 0;

    if (!format)
        return (-1);
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            count += print_arg(args, *format);
            format++;
        }
        else
        {
            count += print_chr(*format);
            format++;
        }
    }
    va_end(args);
    return (count);
}
#include <stdio.h>

int ft_printf(const char *format, ...);

int main(void)
{
    ft_printf("\nFUNCTION\n");
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Decimal: %d\n", 12345);
    ft_printf("Negative: %d\n", -6789);
    ft_printf("Hex lowercase: %x\n", 48879);
    ft_printf("Hex uppercase: %X\n", 48879);
    ft_printf("NULL string: %s\n", (char *)NULL);
    ft_printf("\nORIGINAL\n");
    printf("String: %s\n", "Hello, World!");
    printf("Decimal: %d\n", 12345);
    printf("Negative: %d\n", -6789);
    printf("Hex lowercase: %x\n", 48879);
    printf("Hex uppercase: %X\n", 48879);
    printf("NULL string: %s\n", (char *)NULL);
    return (0);
}
