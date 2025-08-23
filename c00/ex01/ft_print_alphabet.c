/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:01:00 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/23 17:11:35 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// FUNCTION TO WRITE THE ALPHABET FROM 'a' TO 'z'
void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	if (c > 'z')
		return ;
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}
*/
