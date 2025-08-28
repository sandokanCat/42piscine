/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:19:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/27 18:24:20 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* SWAP TWO INTEGERS THROUGH POINTERS */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 2;
	ft_swap(&x, &y);
	printf("%d %d\n", x, y);
	return (0);
}
*/
