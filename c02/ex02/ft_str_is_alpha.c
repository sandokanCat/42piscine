/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:45:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/28 20:07:00 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* RETURN 1 IF STR IS ONLY ALPHABETIC OR EMPTY, ELSE RETURN 0 */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*test = "A1b2C3";

	printf("%s -> %d\n", test, ft_str_is_alpha(test));
	return (0);
}
*/
