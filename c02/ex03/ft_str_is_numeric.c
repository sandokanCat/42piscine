/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:45:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/28 20:21:49 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* RETURN 1 IF STR IS ONLY DIGITS OR EMPTY, ELSE RETURN 0 */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char *test = "123456";

	printf("%s -> %d\n", test, ft_str_is_numeric(test));
	return (0);
}
*/
