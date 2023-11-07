/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsamardz <jsamardz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:19:16 by jsamardz          #+#    #+#             */
/*   Updated: 2023/11/07 22:18:01 by jsamardz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write(char *c)
{
	write (1, &c, 1);
}

char ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_write('-');
		ft_write('2');
		ft_putnbr(147483648);
	}
	if (n < 0)
	{
		ft_write ('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_write (n + '0');
}
