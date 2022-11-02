#include <unistdt.n>

char	*ft_c(char *s1, char *s2)
{
	int i;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

