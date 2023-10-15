/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:20:18 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 17:49:00 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	size_t	i;
	char	*destp;
	char	*srcp;

	if (!dest && !src)
		return (dest);
	destp = (char *)dest;
	srcp = (char *)src;
	i = 0;
	while (n > i)
	{
		destp[i] = srcp[i];
		i++;
	}
	return (dest);
}
