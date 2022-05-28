/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:35:19 by abermude          #+#    #+#             */
/*   Updated: 2022/05/28 18:02:16 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcat(char	*dest, const char *src, size_t destsize)
{
	size_t	index_src;
	size_t	len_dest;
	size_t	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen ((char *) src);
	if (destsize <= len_dest)
		return (destsize + len_src);
	index_src = 0;
	while (src[index_src] != '\0' && destsize > (len_dest + 1))
	{
		dest[len_dest] = src[index_src];
		index_src++;
		index_src++;
		len_dest++;
	}
	dest [len_dest] = '\0';
	return (len_dest + ft_strlen((char *)(&src[index src])));
}
