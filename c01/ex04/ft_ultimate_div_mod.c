/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:19:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/27 19:06:41 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* STORE *a / *b IN *a AND *a % *b IN *b */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 17;
	y = 5;
	ft_ultimate_div_mod(&x, &y);
	printf("%d %d\n", x, y);
	return (0);
}
*/
