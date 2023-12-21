/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:19:17 by dfontech          #+#    #+#             */
/*   Updated: 2023/12/11 13:56:32 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*seg;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	seg = (char *)malloc(len + 1);
	if (!seg)
		return (NULL);
	while (start < ft_strlen(s) && len--)
		seg[i++] = s[start++];
	seg[i] = '\0';
	return (seg);
}


/*int main()
{
	size_t len;
	const char s[] = "Haciendo una subcadena";
	int ini;

	ini = 2;
	len = ft_strlen(s);
	printf("%s\n", s);
	printf("%s\n", ft_substr(s, ini, len));
}*/