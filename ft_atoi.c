#include "libft.h"

int	ft_atoi(const char *str)
{
	short	sign;
	int	number;

	sign = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if(*str == '-')
			sign++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if (!(sign % 2))
		return (number);
	return (-number);
}

int main() {
    const char *str1 = "12345";
    const char *str2 = "-6789";
    const char *str3 = "  +42";
    const char *str4 = "   -789";

    int num1 = ft_atoi(str1);
    int num2 = ft_atoi(str2);
    int num3 = ft_atoi(str3);
    int num4 = ft_atoi(str4);

    printf("String: %s, Integer: %d\n", str1, num1);
    printf("String: %s, Integer: %d\n", str2, num2);
    printf("String: %s, Integer: %d\n", str3, num3);
    printf("String: %s, Integer: %d\n", str4, num4);

    return 0;
}
