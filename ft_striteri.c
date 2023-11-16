/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:11:35 by abuchet           #+#    #+#             */
/*   Updated: 2022/12/13 11:50:12 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	a;

	a = 0;
	if (!f || !s)
		return ;
	if (s)
	{
		while (s[a])
		{
			(*f)(a, &s[a]);
			a++;
		}
	}
}
