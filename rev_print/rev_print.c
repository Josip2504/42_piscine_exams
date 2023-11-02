/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsamardz <jsamardz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:12:14 by jsamardz          #+#    #+#             */
/*   Updated: 2023/11/02 13:49:58 by jsamardz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = ft_strlen(av[1]) - 1;
		while (av[1][i])
		{
			write (1, &av[1][i], 1);
			i--;	
		}	
	}
	write (1, "\n", 1);
	return (0);
}
