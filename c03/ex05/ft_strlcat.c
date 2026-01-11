/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncabez <goncabez@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:28:10 by goncabez          #+#    #+#             */
/*   Updated: 2025/09/02 17:45:10 by goncabez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* CONCAT SRC TO DEST WITH TOTAL SIZE LIMIT, RETURN LEN_DEST+LEN_SRC */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = 0;
	len_src = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (size + len_src);
	i = len_dest;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

/*
int	main(void)
{
	char			test[20] = "Hello";
	unsigned int	ret;

	ret = ft_strlcat(test, " world!", sizeof(test));
	printf("%s %u\n", test, ret);
	return (0);
}
*/
