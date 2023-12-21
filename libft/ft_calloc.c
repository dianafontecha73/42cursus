/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:24:12 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/21 12:29:13 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(size * count);
	// if (!str)
	// 	return (0);
	ft_bzero(str, count);
	return (str);
}
/*
int	main()
{
	char	*buffer;
	char ptr[7] = "abcdef";


	buffer = (char *)ft_calloc(6, sizeof(char));
	if (!buffer)
		printf("error calloc");
	buffer = ptr;
	printf("%s", buffer);
	return (0);
}*/
