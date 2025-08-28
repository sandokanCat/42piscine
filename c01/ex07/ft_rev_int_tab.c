/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:16:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/27 21:42:44 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* REVERSE INT ARRAY IN PLACE */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*
int	main(void)
{
	int	arr[5] = {1, 2, 3, 4, 5};
	int	i = 0;

	ft_rev_int_tab(arr, 5);
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
*/
