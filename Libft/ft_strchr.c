/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:09:51 by abermude          #+#    #+#             */
/*   Updated: 2022/05/28 18:31:47 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	c;

	c = (unsigned char)ch;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)(&str[i]));
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
