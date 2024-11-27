#include <unistd.h>
#include <stdio.h>

int ft_count_alen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
	    	return (i);
	i++;
	}
	return (i);
}
/*
int	main(void)
{
	char *str;
	
	str = "cacca";
	printf("%d\n", ft_count_alen(str));
	return (0);
}*/
