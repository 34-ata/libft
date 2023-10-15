/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:20:47 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 16:45:41 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n-- > 0)
		p[n] = (unsigned char)c;
	return (str);
}
