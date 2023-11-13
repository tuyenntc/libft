#include "libft.h"

static char	*ft_char(char *s, unsigned int number, long int len)
{
	s[len--] = '\0';
	while (number > 0)
	{
		s[len--] = '0' + (number % 10);
		number /= 10;
	}
	return (s);
}

static long int ft_len(int n)
{
	long int	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	long int	len;
	char *s;

	len = ft_len(n);
	s = (char *)malloc(len + 1);

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	return (ft_char(s, n,  len - 1));
}

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
