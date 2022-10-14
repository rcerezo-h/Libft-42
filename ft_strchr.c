/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:40:20 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/03 14:20:51 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*alts;
	int		x;

	x = 0;
	alts = (char *)s;
	altc = c;
	while (alts[x] != altc)
	{
		if (alts[x] == '\0')
			return (NULL);
		x++;
	}
	return ((char *)alts + x);
}
