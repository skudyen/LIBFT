/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:03:37 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/08/31 18:29:05 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *membloc, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)membloc;
	while (len > 0)
	{
		*(tmp++) = c;
		len--;
	}
	return (tmp);
}
