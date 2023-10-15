/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:23:25 by marvin            #+#    #+#             */
/*   Updated: 2023/10/13 21:39:10 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < sz)
		i++;
	while (src[j] && (i + j + 1) < sz)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < sz)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
