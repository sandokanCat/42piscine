/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:27:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/09/01 18:13:07 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* COPY SRC TO DEST WITH SIZE LIMIT, RETURN LENGTH OF SRC */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*
int	main(void)
{
	char	src[] = "https://github.com/sandokanCat";
	char	dest[100];
	unsigned int	len;

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("%u\n", len);
}
*/
