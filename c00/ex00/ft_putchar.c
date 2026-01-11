/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:00:00 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/14 14:54:10 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* PRINTS A SINGLE CHARACTER TO STDOUT */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int	main(void)
{
	ft_putchar('A'); // PRINTS 'A'
	return (0);
}
*/
