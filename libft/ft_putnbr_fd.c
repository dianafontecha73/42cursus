/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:45:31 by dfontech          #+#    #+#             */
/*   Updated: 2023/12/13 12:46:29 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd((n / 10), fd);
		}
		ft_putchar_fd(((n % 10) + '0'), fd);
	}
}
/*
int main()
{
	int n = 5;
	int fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);

// En la línea 30 Se suma '0' porque el 
resultado daría un numero entero y putchar 
debe recibir un caracter no enteros
}*/