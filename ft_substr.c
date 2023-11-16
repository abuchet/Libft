/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:40:35 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/12 15:11:11 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*a;
	size_t			len2;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	len2 = ft_strlen(s + start);
	if (len2 < len)
		len = len2;
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (!a)
		return (0);
	ft_strlcpy(a, s + start, len + 1);
	return (a);
}
