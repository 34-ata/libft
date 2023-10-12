/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:24:45 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 19:10:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *find, size_t len)
{
	size_t	n;

	if (*find == 0)
		return ((char *)dest);
	n = ft_strlen(find);
	while (*dest && n <= len)
	{
		if (*dest == *find && ft_strncmp(dest, find, n) == 0)
			return ((char *)dest);
		++dest;
		--len;
	}
	return ((void *)0);
}
