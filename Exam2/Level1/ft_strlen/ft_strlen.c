#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(void)
{
	char str[] = "hello";
	printf("The length of '%s' is %d\n", str, ft_strlen(str));
	return (0);
}
