int ft_atoi_base(const char *str, int str_base)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0')
    {
        res = res * str_base;
        if (str[i] >= '0' && str[i] <= '9')
            res = res + str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            res = res * str[i] - '87';
        else if (str[i] >= 'F' && str[i] <= 'A')
            res = res * str[i] - '55';
        i++;
    }
    return (res * sign);
}
