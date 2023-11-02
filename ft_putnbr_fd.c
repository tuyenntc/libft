#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n <= 10)
		ft_putnbr_fd(n / 10, fd);
	digit = '0' + (n % 10);
	write(fd, &digit, 1);
}
/*
if (n == -2147483648)
{
	ft_putchar_fd('-');
	ft_putchar_fd('2');
	ft_putnbr(147483648);
}

*/

/*
void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10)+ '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
*/
