/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:18:09 by dfontech          #+#    #+#             */
/*   Updated: 2023/12/04 16:51:37 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*seg;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	seg = malloc(sizeof(char) * (len + 1));
	if (!seg)
		return (0);
	ft_strlcpy(seg, s1, len + 1);
	ft_strlcat(seg, s2, len + 1);
	return (seg);
}
/*
int main()
{
	char s2 [] = "para unir cadenas";
	char s1 [] = "Una función ";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/
