#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	num = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

int	is_prime(int num)
{
	int	i;

	if (num < 2)
		return (0);
	i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int num)
{
	char	c;

	if (num > 9)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	num;
	int	sum = 0;
	int	i = 2;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	num = ft_atoi(argv[1]);
	if (num <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (i <= num)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
