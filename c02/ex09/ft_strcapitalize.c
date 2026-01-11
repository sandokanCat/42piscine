/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:04:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/09/01 17:27:31 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* CAPITALIZE FIRST WORD LETTERS, RETURN STR */
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	test[] =
		"salut, comment tu vas ?"
		"42mots quarante-deux; "
		"cinquante+et+un";
	printf("%s\n", ft_strcapitalize(test));
	return (0);
}
*/
