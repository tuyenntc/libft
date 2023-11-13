#include "libft.h"

size_t  ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;//counter for iterating the source string
	size_t src_len;//variable to store the length of the source string

	src_len = 0;
	i = 0;
	//calculate source length up to the max allowed size (dstsize - 1) or until encounting a null terminator
	while (src_len < dstsize - 1 && src[src_len] != '\0')
		src_len++;
	//copy character && add the null terminator by the end
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
	size_t	size = sizeof(dest) / sizeof(dest[0]);
	size_t	copied = ft_strlcpy(dest, source, size);
	printf("copied %lu bytes: \"%s\"\n", (unsigned long)copied, dest);
	return (0);
}
*/
