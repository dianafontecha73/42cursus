/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:15:46 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/22 16:50:51 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!src && !dst)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
/*
int	main ()
{
	const char src[] = "test basic du memcpy !";
	char dst[22];
	printf("Before memcpy dst = %s\n", src);
	ft_memcpy(dst, src, 22);
	printf("After memcpy dst = %s\n", dst);
	return (0);
}
*/
