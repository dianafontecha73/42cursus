/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:11:39 by dfontech          #+#    #+#             */
/*   Updated: 2023/12/13 15:49:26 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_free(char **ptr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free (ptr[i]);
		i++;
	}
	free (ptr);
	return (0);
}

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			if (*s == '\0' || *s == c)
				count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**c1;
	int		i;
	int		j;
	int		start;

	c1 = (char **)ft_calloc((ft_countword(s, c) + 1), sizeof(char *));
	if (s == NULL && c1 == NULL)
		return (free(c1), NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i++])
			start = i;
		while (s[i] != c && s[i] && i++)
		{
			if (s[i] == '\0' || s[i] == c)
			{
				c1[j] = ft_substr(s, start, i - start);
				if (c1[j++] == NULL)
					return (ft_free(c1, j - 1), NULL);
			}
		}
	}
	return (c1);
}

/*
int main()
{
	int i = 0;
	char const	s[]	= "HolaMundo en C";
	char	c = ' ';
	char	**result = ft_split(s, c);

	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free (result);
	return (0);
}*/