/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:46:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/09/01 20:55:56 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* COMPARE UP TO N CHARACTERS OF TWO STRINGS, RETURN DIFFERENCE */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	printf("%d\n", ft_strncmp("abcdefg", "abcxyz", 3));
	return (0);
}
*/
