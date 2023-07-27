/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:22:31 by mel-moun          #+#    #+#             */
/*   Updated: 2022/10/20 19:16:28 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bc;

	bc = (unsigned char *) b;
	while (len > 0)
	{
		*bc++ = (unsigned char) c;
		len--;
	}
	return (b);
}
