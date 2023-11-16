/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:46:26 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/08 12:52:34 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			nb;
	unsigned char	*a;
	unsigned char	*b;

	nb = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (!a && !b)
		return (0);
	if (a > b)
	{
		while (++nb <= len)
			a[len - nb] = b[len - nb];
	}
	else
	{
		while (len-- > 0)
		{
			a[nb] = b[nb];
			nb++;
		}
	}
	return (dst);
}
