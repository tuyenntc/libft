#include "libft.h"
/*
void    *ft_calloc(size_t count, size_t size)
{
	size_t	total_size;

	total_size = count * size;
	void	*allocated_memory = malloc(total_size);
	if(allocated_memory == NULL)
		return (NULL);
	ft_memset(allocated_memory, 0, total_size);
	return (allocated_memory);
}
*/
void    *ft_calloc(size_t count, size_t size)
{
	void	*s;
	s = malloc(count * size);
	if (!(s))
		return (NULL);
	s = ft_memset(s, 0, count * size);
	return (s);
}
/*
int	main()
{
	size_t	num_elements = 5;
	size_t	element_size = sizeof(int);
	int	*array = (int *)ft_calloc(num_elements, element_size);
	if (array == NULL)
		printf("memory allocation failed\n");
	else
	{
		for(size_t i = 0; i < num_elements; i++)
		{
			printf("%d", array[i]);
		}
		free(array);
	}
	return (0);
}
*/
