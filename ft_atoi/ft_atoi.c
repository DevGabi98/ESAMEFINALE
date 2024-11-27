#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	//int	sign;
	int	result;

	i = 0;
	/*sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}*/
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);// * sign);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	result = ft_atoi(argv[1]);
		printf("The integer value is: %d\n", result);
	}
	return 0;
}*/
