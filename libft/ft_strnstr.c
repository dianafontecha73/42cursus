/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:24:55 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/20 14:42:52 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;
	size_t	s;

	if (!*needle)
		return ((char *)haystack);
	l = 0;
	while (haystack[l] && l < len)
	{
		s = 0;
		while (haystack[l + s] == needle[s] && (l + s) < len && haystack[l + s]) 
			s++;
		if (!needle[s])
			return ((char *)(haystack + l));
		l++;
		// s = 0;

	}
	return (0);
}
/*
int	main()
{
	char	big[] = "Hola Mundo";
	char	small[] = "Mundo";
	size_t len = 10;

 	char *result = ft_strnstr(big, small, len);
	printf("%s\n", result);
	return (0);
}
*/
