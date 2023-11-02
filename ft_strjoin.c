#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total_len;
	char	*new;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2;
	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(total_len + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, sizeof(new));
	ft_strlcpy(new + len1, s2, sizeof(new + len1));
	return (new);
}
/*
//2nd solution
{
	char	*newstr;
	int	s1_len;
	int	s2_len;
	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) ? ft_strdup(s2) : ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(newstr = (char *)malloc(sizeof(char) * (s1_len + s2+len + 1))));
		return (NULL);
	ft_strlcpy(newstr, s1, s1_len + 1);
	ft_strlcat(newstr + (s1_len), s2, s2_len + 1);
	return (newstr);
}
*/
int	main(void)
{
	const char *str1 = "hello";
	const char *str2 = "world";
	char *result = ft_strjoin(str1, str2);
	if (result != NULL)
	{
		printf("joined string: %s\n", result);
		free(result);
	}
	else
	{
		printf("memory allocation failed\n");
	}
	return (0);
}
