#include <unistd.h>
#include <stdio.h>
#include <string.h>


int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0' )
		i++;
	return (i);

}

int	main(void)
{
	char src[] = "Fuck off";
	printf("%d\n", ft_strlen(src));
}
