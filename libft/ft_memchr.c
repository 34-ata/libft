/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:19:52 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 18:47:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sp;
	size_t			i;

	i = 0;
	sp = (unsigned char *)s;
	while (i < n)
	{
		if (*sp == (unsigned char)c)
			return (sp);
		sp++;
		i++;
	}
	return ((void *)0);
}
