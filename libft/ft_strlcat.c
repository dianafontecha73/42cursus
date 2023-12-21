/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:07:59 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/16 16:18:13 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	slen;
	size_t	dlen;

	len = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize < 1 || dstsize <= dlen)
		return (slen + dstsize);
	while (*dst != '\0')
	{
		dst++;
		len++;
	}
	while (*src != '\0' && len < (dstsize - 1))
	{
		*dst++ = *src++;
		len++;
	}
	*dst = '\0';
	return (slen + dlen);
}
/*
	int	main ()
{
	char src [] = "muchisimo en 42.";
	char dst [] = "Aprendiendo ";
		
	printf("%lu\n", ft_strlcat(dst, src, ft_strlen(dst)+ ft_strlen(src)));
	printf("After ft_strlcat cadena2 = %s\n", dst);
	return (0);
}
*/
