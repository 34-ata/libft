/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:20:36 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 19:52:13 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t len)
{
	if ((char *)dst == (char *)src)
		return (dst);
	if ((char *)src < (char *)dst)
	{
		while (len--)
			*(char *)(dst + len) = *(char *)(src + len);
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
