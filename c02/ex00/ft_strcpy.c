/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:15:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/28 14:32:03 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* COPY SRC INTO DEST AND RETURN DEST */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "https://github.com/sandokanCat";
	char	dest[100];

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
*/
