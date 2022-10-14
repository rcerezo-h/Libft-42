/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:10:54 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/05 11:23:38 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		x;
	char		*alts;

	alts = (char *)s;
	x = ft_strlen(s);
	if (c == '\0')
		return (alts + x);
	while (x != 0)
	{
		if (alts[x] == (char)c)
			return (alts + x);
		x--;
	}
	if (s[0] == (char)c)
		return (alts);
	return (NULL);
}
