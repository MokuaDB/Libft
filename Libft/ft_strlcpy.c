/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:17:33 by abermude          #+#    #+#             */
/*   Updated: 2022/05/28 18:08:38 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t		i;
	size_t		l;

	if (!dest || !src)
		return (0);
	i = 0;
	l = 0;
	while (src[l] != '\0')
		l++;
	if (destsize != '\0')
	{
		while (src[i] != '\0' && i < (destsize - 1))
		{
			dest[i] = srcc[i]
				i++;
		}
		dest[i] = '\0';
	}
	return (l);
}
