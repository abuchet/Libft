/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:44:11 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/08 10:47:04 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				len;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	len = 0;
	while (n > 0)
	{
		if (str1[len] != str2[len])
			return (str1[len] - str2[len]);
		len++;
		n--;
	}
	return (0);
}
