/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:31:17 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/08 10:53:11 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	while ((unsigned char)s1[len] == (unsigned char)s2[len]
		&& s1[len] && s2[len] && len < n - 1)
		len++;
	if (n > 0)
		return ((unsigned char)s1[len] - (unsigned char)s2[len]);
	return (0);
}
