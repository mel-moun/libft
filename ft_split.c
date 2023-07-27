/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:59:25 by mel-moun          #+#    #+#             */
/*   Updated: 2022/10/20 19:18:53 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	check(const char *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	**writeplz(const char *s, char **p, char c, unsigned char i)
{
	unsigned int	j;
	unsigned int	k;
	size_t			len;

	j = 0;
	k = 0;
	len = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i - 1;
		while (s[++j] != c && s[j] != '\0')
			len++;
		if (s[i] == '\0')
		{
			p[k] = 0;
			break ;
		}
		p[k++] = ft_substr(s, i, len);
		len = 0;
		i = j;
	}
	return (p);
}

char	**ft_split(const char *s, char c)
{
	char			**p;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	p = (char **) ft_calloc ((check(s, c) + 1), sizeof(char *));
	if (p == NULL)
		return (NULL);
	return (writeplz(s, p, c, i));
}
