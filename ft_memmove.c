/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:26:46 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/09/27 12:42:39 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*castsrc;
	char	*castdst;

	castsrc = (char *)src;
	castdst = (char *)dst;
	if (castsrc < castdst)
	{
		while (len--)
			castdst[len] = castsrc[len];
	}
	else
		ft_memcpy(castdst, castsrc, len);
	return (dst);
}
