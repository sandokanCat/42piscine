/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:40:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/09/04 19:15:48 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// PRINT A NUMBER
void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

/*
int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	return (0);
}
*/
