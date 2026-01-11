/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:58:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/09/01 17:04:29 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* CONVERT ALL UPPERCASE LETTERS TO LOWERCASE, RETURN STR */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	test[] = "HELLO WORLD!";

	printf("%s\n", ft_strlowcase(test));
	return (0);
}
*/
