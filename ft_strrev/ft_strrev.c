#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	int	temp;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	 char str[] = "Hello, world!";

    // Print original string
    printf("Original string: %s\n", str);

    // Reverse the string in place
    ft_strrev(str);

    // Print reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}*/
