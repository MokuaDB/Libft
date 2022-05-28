/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:41:22 by abermude          #+#    #+#             */
/*   Updated: 2022/05/28 18:47:22 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int ch, size_t n)
{
	unsigned char	c;
	unsigned char	*str;
	size_t			i;

	c = (unsigned char)ch;
	str = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(&str[i]));
		i++;
	}
	return (NULL);
}
