/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:22:53 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/21 14:10:04 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*src;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	src = malloc(len * sizeof(char) + 1);
	if (!src)
		return (0);
	while (s1[i])
	{
		src[i] = s1[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
/*
int	main()
{
	char sour[] = "123456";
	char *dest;
	printf("%s\n", sour);
	dest = ft_strdup(sour);
	printf("%s", dest);
	return (0);
}*/
