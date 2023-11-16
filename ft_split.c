/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:50:52 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/12 16:46:30 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_split3(const char *s, int len, int a)
{
	char	*b;
	char	*str;

	str = (char *) s;
	str = str + a;
	a = 0;
	b = (char *)malloc(sizeof(char) * len + 1);
	if (!b)
		return (NULL);
	while (a < len)
	{
		b[a] = str[a];
		a++;
	}
	b[a] = 0;
	return (b);
}

static int	ft_str(char const *str, char c)
{
	int	nbr;
	int	a;

	a = 0;
	nbr = 0;
	while (str[a])
	{
		while (str[a] == c && str[a])
			a++;
		if (str[a])
			nbr++;
		while (str[a] != c && str[a])
			a++;
	}
	return (nbr);
}

static int	ft_startend(char const *s, int *a, int len, char c)
{
	while (s[len] && s[len] == c)
		len++;
	*a = len;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_free(char **str, int len)
{
	int	a;

	a = 0;
	while (a < len)
		free(str[a++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		a;
	int		len;
	int		b;
	int		nbr;
	char	**str;

	len = 0;
	b = 0;
	if (!s)
		return (NULL);
	a = ft_str(s, c);
	str = (char **)malloc(sizeof(char *) * (a + 1));
	if (!str)
		return (NULL);
	str[a] = NULL;
	nbr = a;
	while (len < nbr)
	{
		b = ft_startend(s, &a, b, c);
		str[len] = ft_split3(s, b - a, a);
		if (!str[len])
			return (ft_free(str, len));
		len++;
	}
	return (str);
}
