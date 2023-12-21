/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:01:36 by dfontech          #+#    #+#             */
/*   Updated: 2023/12/11 13:06:14 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int			l;
	const char	*str;

	l = 0;
	str = (char *)s;
	while (str[l] != '\0')
		l++;
	return (l);
}
/*
int	main()
{
	int len;
	char str[] = "\"Cada dia es un nuevo inicio y se debe agradecer\"";

	len = ft_strlen(str);
	printf("%d\n", len);
	return (0);
}
*/
