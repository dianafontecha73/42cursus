/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:34:50 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/16 16:41:22 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *c1;
	unsigned char *c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while ((n > 0) && (c1) && (c2))
	{
		if (*c1 != *c2)
			return ((*c1 - *c2));
		c1++;
		c2++;





		
		n--;
	}
	return (0);
}
/*
int	main ()
{
	char str[] = "*se intenta";
	char str1[] = "Se hace";
	size_t n = 8;
	int result = ft_strncmp(str, str1, n);

	printf("%d\n", result);
	return (0);
}
*/
