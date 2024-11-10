/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:29:26 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/02 22:28:03 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	firstlen;

	s = 0;
	d = ft_strlen(dst);
	firstlen = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (size <= d)
		return (size + ft_strlen(src));
	while (src[s] && firstlen < size - 1)
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	return (firstlen + ft_strlen(src));
}
