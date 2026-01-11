/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:45:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/28 20:35:04 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* RETURN 1 IF STR IS ONLY LOWERCASE ALPHABETIC OR EMPTY, ELSE RETURN 0 */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*test = "A1b2C3";

	printf("%s -> %d\n", test, ft_str_is_lowercase(test));
	return (0);
}
*/
