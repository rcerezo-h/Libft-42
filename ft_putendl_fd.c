/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:15:16 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/09/29 15:03:53 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	x;
	char	c;

	if (s)
	{
		x = 0;
		while (x != ft_strlen(s))
		{
			c = s[x];
			write(fd, &c, 1);
			x++;
		}
		write(fd, "\n", 1);
	}
}
