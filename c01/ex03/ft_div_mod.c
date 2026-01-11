/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:19:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/27 18:43:47 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* STORE a / b IN *div AND a % b IN *mod */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	d;
	int	m;

	ft_div_mod(17, 5, &d, &m);
	printf("%d %d\n", d, m);
	return (0);
}
*/
