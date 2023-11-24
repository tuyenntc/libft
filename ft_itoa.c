#include "libft.h"
#include <limits.h>

static int	get_size(int n, int base)
{
	int	len;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int	len;
	char *result;

	len = get_size(n, 10);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = 0;
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	while (n)
	{
		if (n > 0)
			result[--len] = (n % 10) + '0';
		else
			result[--len] = (n % 10 * -1) + '0';
		n /= 10;
	}
	return (result);
}

/*
static int ft_get_size(int n)
{
    int size;

	size = 0;
    if (n <= 0)
        size++;
    while (n)
    {
        n /= 10;
        size++;
    }
    return (size);
}

static void add_digit(int size, int index, int n, char *s)
{
    while (size > index)
    {
        s[size - 1] = '0' + n % 10;
        n /= 10;
		size--;
    }
}

char *ft_itoa(int n)
{
    int index;
	int	size;
    char *s;

	index = 0;
    if (n == 0)
        size = 1;
    else
        size= ft_get_size(n);
    s = (char *)malloc(size + 1);
    if (!s)
        return NULL;
	if (n == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		n = 147483648;
		index = 2;
	}
    if (n < 0)
	{
        s[0] = '-';
		index = 1;
		n = -n;
	}
    add_digit(size, index, n, s);
    return s;
}
*/
int main()
{
    int num = INT_MIN;
    char *str = ft_itoa(num);

    if (str)
    {
        printf("int to ascii: %s\n", str);
        free(str);
    }
    else
    {
        printf("memory allocation failed\n");
    }

    return 0;
}
/*

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

static void add_digit(char *s, size_t len, int n)
{
	size_t	i;
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
			n /= 10;
		}
		else
		{
			s[len] = '0' + n % 10;
			n /= 10;
		}
}
char	*ft_itoa(int n)
{
	size_t	len;
	char	*s;
	if (n == 0)
		len = 1;
	else
		len = ft_len(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[len--] = '\0';
//	if (n < 0)
//		s[0] = '-';
	add_digit(s, len, n);
	return (s);
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
