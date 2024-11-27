#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
		i++;
	if (i == n)
	       return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "qualcosa";
	char	s2[] = "qualcosina";
	printf("%d\n", ft_strncmp(s1, s2, 8));
	return (0);
}*/
