#include "libft.h"


void    *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *a = dst;
	const unsigned char *b = src;
	if (a < b)
	{
		while (len--)
			*a++ = *b++;
	}
	else
	{
		while (len--)
			a[len] = b[len];
	}
	return (dst);
}
/*
void    *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dp = (unsigned char *)dst;
	const unsigned char *sp = (const unsigned char *)src;
	if (sp < dp && sp + len > dp)
	{
		sp += len;
		dp += len;
		while (len-- > 0)
		{
			*--dp = *--sp;
		}
	}
	else
	{
		while (len-- > 0)
		{
			*dp++ = *sp++;
		}
	}
	return (dst);
}

#include <string.h>
*/
int	main(void)
{
	char	str1[] = "hello world";
	char	str2[20];
	strcpy(str2, "for testing");
	printf("before: str1 = %s, str2 = %s\n", str1, str2);
	ft_memmove(str2, str1, 13);
	printf("after: str1 = %s, str2 = %s\n", str1, str2);
	return (0);
}