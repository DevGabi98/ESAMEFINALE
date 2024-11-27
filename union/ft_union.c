#include <unistd.h>

int ft_already_printed(char *result, char c) {
    int i = 0;

    while (result[i]) {
        if (result[i] == c) {
            return 1;
        }
        i++;
    }
    return 0;
}

char	concatenate_union(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while (str1[i] != '\0')
	    i++;
    while (str2[j] != '\0')
    {
	    str1[i] = str2[j];
	    i++;
	    j++;
    }
    str1[i] = '\0';
    return (*str1);
}
/*
int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);

}*/
char	ft_union(char *str1, char *str2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str1[i] != '\0' && str2[j] != '\0')
	{
		i++;
		j++;
	}

	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str1[x] != i && str2[y] != j)
	{
		str1[x] = str2[y];
		x++;
		y++;
	}
	str1[x] = '\0';
	return (*str1);
}

int	main(int argc, char **argv) 
{
    if (argc == 2)
    {
	char *str1 = argv[1];
	char *str2; 
        	
	char	result = ft_union(str1, str2);
	write(1, &result, 1);
    }
	    write(1, "\n", 1);
    return (0);
}

