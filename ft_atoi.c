/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsamardz <jsamardz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:38:02 by jsamardz          #+#    #+#             */
/*   Updated: 2023/11/10 08:53:23 by jsamardz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int s;
	int r;

	r = 0;
	i = 0;
	s = 1;
	while (str[i] == 32 || (str[i] >= 9  && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (s * r);
}

int main()
{
	char *c = "---123d2";
	int r = ft_atoi(c);
	printf("%d", r);
	return (0);
}