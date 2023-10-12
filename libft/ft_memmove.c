/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:20:36 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 18:52:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}
/* bellek alanlarında oluşabilecek çakışmaları 
 * if kontrolü ile değerlendiriyoruz. 
 * Eğer source'un bellek adresi destination'ın bellek adresinden 
önce geliyorsa (örneğin [ft_memmove(src + 3, src, 7)])
yazmaya sondan başlıyoruz. 
Eğer source'un bellek alanı destination'ın bellek adresinden sonra geliyorsa 
kopyalamaya en baştan başlayıp len kadar byte'ı kopyalıyoruz. */
