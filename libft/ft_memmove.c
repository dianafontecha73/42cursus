/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:37:37 by dfontech          #+#    #+#             */
/*   Updated: 2023/12/15 13:20:52 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (!src && !dst)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	if (src >= dst)
		ft_memcpy(d, s, len);
	else
	{
		while (len > 0)
		{
			*(d + len - 1) = *(s + len - 1);
			len--;
		}
	}
	return (dst);
}
/*
int	main()
{
	const char *src = "Otro dia en C";
	char dst[13];
	printf("Before memmove dst = %s\n", dst);
	ft_memmove(dst, src, 3);
	printf("After memmove dst =  %s\n", dst);
	printf("sizeof de src:%zu", sizeof(src));
}*/
