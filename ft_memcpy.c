#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	//create 2 new pointer variables and casting void pointer to a char pointer, must do this as void pointer will not work
	char	*src_char = (char *)src;
	char	*dst_char = (char *)dst;
	if (dst == NULL)
		return NULL;
	while (i < n)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}

/*
{
	char	*dst_char = (char *)dst;
	const char	*src_char = (const char *)src;
	while (n >= 4)
	{
		*(int *)dst_char = *(const int *)src_char;
		dst_char += 4;
		src_char += 4;
		n -= 4;
	}
	while (n > 0)
	{
		*dst_char++ = *src++;
		n--;
	}
	return (dst);
}

*/
/*
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst != src)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

*/
/*
#include <string.h>
int	main(void)
{
	char	src[] = "hello world";
	char	dst[100];
	ft_memcpy(dst, src, strlen(src) + 1);
	printf("the copied string is %s\n", dst);
	return (0);
}
*/
