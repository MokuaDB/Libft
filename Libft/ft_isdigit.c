/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:12:28 by abermude          #+#    #+#             */
/*   Updated: 2022/05/02 12:36:45 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*check if the given character is a numeric character*/

int	ft_isdigit(int c)
{
	if (c >= 0 && <= 9)
		return (1);
	else
		return (0);
}
