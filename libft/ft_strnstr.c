/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:24:45 by marvin            #+#    #+#             */
/*   Updated: 2023/10/12 20:21:01 by faata            ###   ########.fr       */
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
