/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:41:50 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/08 11:47:20 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size == 0)
	{
		while (src[len])
			len++;
		return (len);
	}
	while (len < size - 1 && src[len])
	{
		dst[len] = src[len];
		len++;
	}
	if (len < size)
		dst[len] = '\0';
	while (src[len])
		len++;
	return (len);
}
