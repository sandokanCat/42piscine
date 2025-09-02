/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:18:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/09/02 17:26:36 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* FIND SUBSTRING TO_FIND INSIDE STR, RETURN POINTER OR NULL */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	test[] = "Hello world!";
	char	*sub;

	sub = ft_strstr(test, "world");
	if (sub)
		printf("%s\n", sub);
	else
		printf("Not founded\n");
	return (0);
}
*/
