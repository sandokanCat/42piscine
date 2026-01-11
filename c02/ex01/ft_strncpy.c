/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:35:27 by goncabez          #+#    #+#             */
/*   Updated: 2025/08/28 15:42:51 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* COPY UP TO N CHARS FROM SRC INTO DEST */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "https://github.com/sandokanCat";
	char	dest[20];

	ft_strncpy(dest, src, 18);
	printf("DEST: %s\n", dest);
	return (0);
}
*/
