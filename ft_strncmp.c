#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	main(void)
{
	char	*s1 = "abc";
	char	*s2 = "acb";
	int	result = ft_strncmp(s1, s2, 5);
	if (result == 0)
		printf("s1 = s2\n");
	else if (result > 0)
		printf("s1 > s2\n");
	else
		printf("s1 < s2\n");
	return (0);
}
