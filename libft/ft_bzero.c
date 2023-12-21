/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:20:37 by dfontech          #+#    #+#             */
/*   Updated: 2023/11/16 13:29:03 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
	return (s);
}
/*
int main()
{
	char ptr[13] = "Esto es hoy: ";
	printf("Before: %s\n", ptr);
	ft_bzero(ptr, 7);
	printf("After: %s\n", ptr);
	return (0);
}
*/
