/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:23:34 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/15 13:08:08 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		a = (unsigned int)(n * -1);
	}
	else
		a = (unsigned int)n;
	if (a >= 10)
		ft_putnbr_fd(a / 10, fd);
	ft_putchar_fd((char)(a % 10 + 48), fd);
}
