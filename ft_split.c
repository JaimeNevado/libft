/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:43:05 by jnevado-          #+#    #+#             */
/*   Updated: 2022/05/15 15:28:00 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**point_to_strings(char *memory, unsigned int len, int words)
{
	char			**array;
	unsigned int	i;
	unsigned int	w;

	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == 0)
		return (0);
	i = 0;
	w = 0;
	if (memory[i] != '\0')
		array[w++] = ft_strdup(&memory[i]);
	i++;
	while (i < len)
	{
		if (memory[i] != '\0' && memory[i - 1] == '\0')
			array[w++] = ft_strdup(&memory[i]);
		i++;
	}
	array[w] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	len;
	unsigned int	i;
	int				words;
	char			*memory;
	char			**array;

	if (!s)
		return (0);
	len = ft_strlen((char *)s);
	memory = ft_strdup(s);
	if (memory == 0)
		return (0);
	words = 0;
	i = 0;
	while (i < len)
	{
		if (memory[i] == c)
			memory[i] = '\0';
		else if (i == 0 || memory[i -1] == '\0')
			words++;
		i++;
	}
	array = point_to_strings(memory, len, words);
	free(memory);
	return (array);
}
