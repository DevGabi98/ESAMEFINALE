#include <unistd.h>

int ft_already_printed(char *result, char c)
{
    int i = 0;

    while (result[i])
    {
        if (result[i] == c) {
            return 1;
        }
        i++;
    }
    return 0;
}

void	ft_union(char *str1, char *str2) {
    char result[1000];
    int i = 0;
    int j = 0;
    int index = 0;

    while (str1[i]) {
        if (!ft_already_printed(result, str1[i])) {
            result[index++] = str1[i];
        }
        i++;
    }
    while (str2[j]) {
        if (!ft_already_printed(result, str2[j])) {
            result[index++] = str2[j];
        }
        j++;
    }

    result[index] = '\0';  
    write(1, result, index);}

int	main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_union(argv[1], argv[2]); 
    }
    write(1, "\n", 1);
    return 0;
}

