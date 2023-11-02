#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	b;
	unsigned char *mem;

	mem = s;
	b = '\0';
	i = 0;
	while (i < n)
	{
		mem[i] = b;
		i++;
	}
}

#include <string.h>

int	main(void)
{
	char s[5] = "bzero";
	memset(s, 0, 4);
	ft_bzero(s, 4);
	printf("modified string: %s\n", s);
	return (0);
}
