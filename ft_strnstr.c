/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:50:25 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/15 15:00:13 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	int		b;
	char	*str;

	a = 0;
	str = 0;
	if ((len == 0 && !haystack) || needle[a] == 0)
		return ((char *)haystack);
	while (haystack[a] && a < len)
	{
		if (haystack[a] == needle[0])
		{
			str = (char *)haystack + a;
			b = 0;
			while (haystack[a + b] == needle[b] && a + b < len)
			{
				if (!(needle[b + 1]))
					return (str);
				b++;
			}
			str = 0;
		}
		a++;
	}
	return (0);
}
