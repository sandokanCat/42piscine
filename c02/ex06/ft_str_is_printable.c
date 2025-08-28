/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 21:38:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/28 21:51:40 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* RETURN 1 IF STR IS ONLY PRINTABLE CHARACTERS OR EMPTY, ELSE RETURN 0 */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*test = "Tab\tHere";

	printf("Tab\\tHere -> %d\n", ft_str_is_printable(test));
	return (0);
}
*/
