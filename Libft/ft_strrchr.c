/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:27:46 by abermude          #+#    #+#             */
/*   Updated: 2022/05/28 18:34:15 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		len;
	char	c;

	c = (unsigned char)ch;
	len = ft_strlen((char *)str);
	if (c == '\0')
		return ((char *)(&str[len]));
	while (--len >= 0)
	{
		if (str[len] == c)
			return ((char *)(&str[len]));
	}
	return (NULL);
}
