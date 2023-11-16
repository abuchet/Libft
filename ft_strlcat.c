/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:47:00 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/15 14:55:31 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	if (!dst && size == 0)
		return (ft_strlen(src));
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	a = ft_strlen(dst);
	b = 0;
	while (src[b] && a + 1 < size)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[b]));
}
