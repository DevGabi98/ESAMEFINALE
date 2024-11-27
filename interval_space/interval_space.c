#include <unistd.h>

void	ft_interval_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);

		if (str[i + 1] != '\0')
			write(1, "   ", 3);
		i++;	
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_interval_space(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
