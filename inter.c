/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsamardz <jsamardz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:06:52 by jsamardz          #+#    #+#             */
/*   Updated: 2023/11/07 15:32:47 by jsamardz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
	int i;
	int j;
	int x;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					x = 0;
					while (av[1][x] != av[1][i])
						x++;
					if (x == i)
					{
						x = 0;
						while (av[2][x] != av[2][j])
							x++;
						if (x == j)
							write (1, &av[1][i], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}