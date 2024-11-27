#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "az";
	char	s2[] = "bz";
	
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}

/*
int	main(int argc, char **argv)
{
	int	stampa;

	stampa = ft_strcmp(argv[1], argv[2]);
	if (argc == 3)
		write(1, &stampa, 1);
	write(1, "\n", 1);
	return (0);
}*/
