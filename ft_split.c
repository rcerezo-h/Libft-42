/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:33:18 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/04 11:54:20 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strings_count(char const *s, char c)
{
	int	actual_position;
	int	str_count;

	actual_position = 0;
	str_count = 0;
	if (s[actual_position] == c)
		str_count--;
	while (s[actual_position] != '\0')
	{
		if (s[actual_position] == c && s[actual_position + 1] != c
			&& s[actual_position + 1] != '\0')
			str_count++;
		actual_position++;
	}
	str_count++;
	return (str_count);
}

char	*malloc_strings(const char *s, char c)
{
	char	*word;
	int		x;

	x = 0;
	while (s[x] && s[x] != c)
		x++;
	word = (char *)malloc(sizeof(char) * (x + 1));
	if (!word)
		return (NULL);
	x = 0;
	while (s[x] && s[x] != c)
	{
		word[x] = s[x];
		x++;
	}
	word[x] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**tab;
	int		x;

	if (!s)
		return (NULL);
	words = strings_count(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	x = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[x] = malloc_strings(s, c);
			x++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[x] = NULL;
	return (tab);
}
