#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize - 1)
	{
		i++;
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
			dst[i] = src[j];
			i++;
			j++;
	}
	dst[i] = '\0';
	while (src[j] != '\0')
		j++;
	return (i + j);
}
/*
int	main(void)
{
	char	destination[1024] = "this is";
	char	source[] = "the way";
	size_t	result = ft_strlcat(destination, source, 50);
	printf("concatenated string is: %s\n", destination);
	return (0);
}
*/
