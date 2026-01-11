/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:25:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/09/02 20:38:40 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// PRINT STRING CHARACTER BY CHARACTER
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

/*
int	main(void)
{
	ft_putstr("Hello world!");
	return (0);
}
*/
