#include <unistd.h>
#include <stdio.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number ++;
	}
}
/*
void	ft_print_numbers(char *number)
{
	write(1, "0123456789", 10);
}

int	main(void)
{
	ft_print_numbers(number);
	return (0);
}*/
/*
int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}*/
