/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:01:00 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/23 17:16:35 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// FUNCTION TO WRITE THE ALPHABET FROM 'z' TO 'a'
void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	if (c < 'a')
		return ;
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}
*/
