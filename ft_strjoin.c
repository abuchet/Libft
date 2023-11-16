/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:51:33 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/13 11:50:20 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		len;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + len2 + 1));
	if (!str)
		return (0);
	a = -1;
	while (s1[++a])
		str[a] = s1[a];
	a = -1;
	while (s2[++a])
	{
		str[len] = s2[a];
		len++;
	}
	str[len] = '\0';
	return (str);
}
