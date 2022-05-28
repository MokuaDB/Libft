/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:03:12 by abermude          #+#    #+#             */
/*   Updated: 2022/05/28 18:01:01 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destc;
	unsigned char	*srcc;

	if ((dest == '\0') && (src == '\0'))
		return ('\0');
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	i = 1;
	if (srcc < destc)
	{
		while (i <= len)
		{
			destc[len - i] = srcc[len - i];
			i++;
		}
	}
	else
		ft_memcpy (destc, srcc, len);
	return (dest);
}
