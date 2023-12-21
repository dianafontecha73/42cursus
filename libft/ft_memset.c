/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:48:26 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/16 16:00:56 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)b;
	while (len > 0)
	{
		((unsigned char *)str)[i] = c;
		i++;
		len--;
	}
	return (str);
}
/*
int	main()
{
	char ptr[40] = "Esta es una cadena para libreria en C";
	printf("Before: %s\n", ptr);
	ft_memset(ptr, '*', 7);
	printf("After: %s\n", ptr);
	return (0);
}
*/
