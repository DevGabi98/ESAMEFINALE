#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0' && dest[len] != '\0')
		len++;
	if (size <= (unsigned char)dest[len])
		return (size + src[len]);
	while (src[i] != '\0' && (unsigned char)dest[len + i] < size - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest[len] + src[len]);
}
/*
int	main(void)
{
	char	dest[40] = "Hello_";
	char	src[] = "World!";
	unsigned int	size = 15;
	unsigned int	result = ft_strlcat(dest, src, size);

	printf("Resulting string: '%s'\n", dest);
	printf("Theoretical length: %u\n", result);
	return (0);
}*/
