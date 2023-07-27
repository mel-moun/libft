/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:12:34 by mel-moun          #+#    #+#             */
/*   Updated: 2022/10/21 10:27:47 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*b;
	char	*srrc;

	b = (char *) dst;
	srrc = (char *) src;
	i = 0;
	if (!srrc && !b)
		return (NULL);
	while (i < n)
	{
		b[i] = srrc[i];
		i++;
	}
	return (dst);
}
