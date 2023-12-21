/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:03:20 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/16 16:07:04 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char p;

	p  = (unsigned char) c;
	while (*s != '\0' && *s != p)
		s++;
	if (*s == p)
		return ((char*)s);
	else
		return (NULL);
}
/*
int	main ()
{
	const	char *str = "Es una prueba";
	char f = 'a';

	printf("Muestra la letra: %c\n", f);
	printf("Devuelve la cadena: %s\n", ft_strchr(str, f));
	return (0);
}
*/
