/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:28:52 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/13 11:49:57 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(const char *s1, const char *set)
{
	size_t	len;
	size_t	a;

	len = ft_strlen(s1);
	a = 0;
	while (a < len)
	{
		if (ft_strchr(set, s1[a]) == 0)
			break ;
		a++;
	}
	return (a);
}

static int	ft_end(const char *s1, const char *set)
{
	size_t	len;
	size_t	a;

	len = ft_strlen(s1);
	a = 0;
	while (a < len)
	{
		if (ft_strchr(set, s1[len - a - 1]) == 0)
			break ;
		a++;
	}
	return (len - a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	a = ft_start(s1, set);
	b = ft_end(s1, set);
	if (a >= b)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (b - a + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + a, b - a + 1);
	return (str);
}
