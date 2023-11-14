#include "libft.h"

static size_t ft_len(int n)
{
	size_t	len;
	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char *s;

	len = ft_len(n);
	if (!(s = (char *)malloc(len + 1)))
		return (NULL);
	s[len] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (len-- > i)
		if (n < 0)
		{
			s[len] = '0' + n % 10 * (-1);
			n = n / 10;
		}
		else
		{
			s[len] = '0' + n % 10;
			n = n / 10;
		}
	return (s);
}
/*
int	main()
{
	int	num = 123456;
	char *str = ft_itoa(num);
	if (str)
	{
		printf("int to ascii: %s\n", str);
		free(str);
	}
	else
		printf("memory allocation failed\n");
	return (0);
}
*/
