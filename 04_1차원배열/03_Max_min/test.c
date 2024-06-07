#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	change;
	int	i;
	int	ascend;

	change = 1;
	while (change)
	{
		i = 0;
		change = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				ascend = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = ascend;
				change = 1;
			}
			i++;
		}
	}
}

int	main(void)
{
	int array[] = {2, 15, 4, 6, 10};
	int size = sizeof(array) / sizeof(int);
	int ascending = 0;

	ft_sort_int_tab(array, size);

	while(ascending < size)
	{
		printf("Ascending result : %d\n", array[ascending]);
		ascending++;
	}	
}