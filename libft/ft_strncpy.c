/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:04:29 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/16 17:28:51 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	while (len > 0 && *s != '\0')
	{
		*d = *s;
		d++;
		s++;
		len--;
	}
	return (dst);
}
/*
int main ()
{
	const char src[] = "123456";
	char dst[6];
	printf("%s", ft_strncpy(dst, src, 6));
	//ft_strncpy(dst, src, sizeof(src));
	return (0);
}
*/
