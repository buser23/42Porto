#include <unistd.h>
#include <stdio.h>

int	check_doubles(char *str, char c, int pos)
{	
	int	i;
	
	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	inter(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				if (check_doubles(str, str[i], i) == 1)
				{
					write(1, &str[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	inter(argv[1], argv[2]);
	write(1, "\n", 1);
	
	return (0);
}	
