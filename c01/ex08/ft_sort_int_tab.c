/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:45:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/27 21:55:33 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* SORT INT ARRAY IN ASCENDING ORDER (BUBBLE SORT) */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
	}
}

/*
int	main(void)
{
	int	arr[6] = {42, 7, -3, 15, 0, 7};
	int	i = 0;

	ft_sort_int_tab(arr, 6);
	while (i < 6)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
*/
