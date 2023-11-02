#include "libft.h"

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t src_len;

	src_len = 0;
	i = 0;
	while (src_len < dstsize - 1 && src[src_len] != '\0')
		src_len++;
	while (i < src_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	char	dest[12];
	const char	*source = "hello world";
	size_t	size = sizeof(dest);
	size_t	copied = ft_strlcpy(dest, source, size);
	printf("copied %lu bytes: \"%s\"\n", (unsigned long)copied, dest);
	return (0);
}
*/
