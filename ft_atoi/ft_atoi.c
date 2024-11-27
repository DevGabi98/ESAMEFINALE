#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
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
