/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:44:25 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/20 16:33:12 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((i == 0) && (s[i] != (char)c))
			return (NULL);
		else if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
/*
int    main ()
{
    const    char *str = "Es una prueba";
    char f = 'n';
    char *result = ft_strrchr(str, f);

    printf("Muestra la letra: %c\n", f);
    printf("Devuelve letra: %s\n", result);
    return (0);
}
*/
