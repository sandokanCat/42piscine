/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 11:48:16 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/19 14:13:00 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* PRINT 'N' IF NEGATIVE; 'P' IF POSITIVE, ZERO OR NULL */
void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
*/
