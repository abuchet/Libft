/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:19:40 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/15 11:02:07 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = 0;
	if (!s)
		return ;
	while (s[len])
	{
		ft_putchar_fd(s[len], fd);
		len++;
	}
	ft_putchar_fd('\n', fd);
}
