/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:48:27 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/15 13:18:47 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	len;
	int			sign;
	long long	conv;

	len = 0;
	sign = 1;
	conv = 0;
	while ((str[len] >= 9 && str[len] <= 13) || str[len] == 32)
		len++;
	if (str[len] == '+' || str[len] == '-')
		if (str[len++] == '-')
			sign *= -1;
	while (str[len] >= '0' && str[len] <= '9')
	{
		conv = conv * 10 + (str[len] - 48);
		len++;
		if (sign == -1 && (-conv) > 2147483648)
			return (0);
		if (sign == 1 && (-conv) > 2147483647)
			return (-1);
	}
	return (conv * sign);
}
