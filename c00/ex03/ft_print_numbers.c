/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:53:16 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/19 17:30:12 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// FUNCTION TO PRINT ALL NUMBERS FROM '0' TO '9'
void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	if (c > '9')
		return ;
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
*/
