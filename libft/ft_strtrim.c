/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:43:34 by dfontech          #+#    #+#             */
/*   Updated: 2023/12/11 16:02:54 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && (ft_strchr(set, s1[start])))
		start++;
	while (end > start && (ft_strchr(set, s1[end])))
		end--;
	len = end - start + 1;
	str = ft_substr(s1, start, len);
	if (!str)
		return (NULL);
	return (str);
}

// int main(void)
// {
//     char s1[] = ", ,  a, b, c, ,  ";
//     char set[] = ", ";


//     printf("%s\n", ft_strtrim(s1,set));
//     return (0);
// }
// comentar por bloques -->seleccionas y luego alt + shift + A --> /**/
// 					 -->seleccionas y luego alt + shift + 7 --> //
