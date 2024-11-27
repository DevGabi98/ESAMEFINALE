#include <unistd.h>

int	ft_already_printed(char *str, char c, int index)
{
    int	i = 0;
    while (i < index)
    {
        if (str[i] == c)
	{
            return 1;
        }
        i++;
    }
    return 0;
}

int	main(int argc, char **argv)
{
    if (argc == 3)
    {
        char *str1 = argv[1];
        char *str2 = argv[2];
        int i = 0;

        while (str1[i])
	{
		int j = 0;
		int found = 0;
                while (str2[j])
		{
                    if (str1[i] == str2[j])
		    {
			    found = 1;
		    }
		    j++;
		}
		if (found && !ft_already_printed(str1, str1[i], i))
		write(1, &str1[i], 1);
		i++;
	}
    }
    write(1, "\n", 1);
    return 0;
}

