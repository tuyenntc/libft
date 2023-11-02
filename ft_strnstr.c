#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return (char *)haystack;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (!needle[j + 1])
				return (char *)&haystack[i];
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*haystack = "blue sky sometimes blink";
	const char	*needle1 = "blink";
	const char	*needle2 = "wuf";
	const char	*needle3 = "";

	char *result1 = ft_strnstr(haystack, needle1, 25);
	char *result2 = ft_strnstr(haystack, needle2, 25);
	char *result3 = ft_strnstr(haystack, needle3, 25);
	if (result1 != NULL)
		printf("found %s at position %ld\n", needle1, result1 - haystack);
	else
		printf("not found\n");
	if (result2 != NULL)
		printf("found %s at position %ld\n", needle2, result2 - haystack);
	else
		printf("not found\n");
	if (result3 != NULL)
		printf("found %s at position %ld\n", needle3, result3 - haystack);
	else
		printf("not found\n");
	return (0);
}
