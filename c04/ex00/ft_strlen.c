/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:00:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/09/02 20:17:39 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// COUNT LENGTH OF STRING
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*
int	main(void)
{
	char	test[] = "Hello world";

	printf("%d\n", ft_strlen(test));
	return (0);
}
*/
