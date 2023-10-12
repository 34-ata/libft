/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:23:15 by marvin            #+#    #+#             */
/*   Updated: 2023/10/12 20:20:42 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char			*str;
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	index2 = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (index < ft_strlen(s1))
	{
		str[index] = s1[index];
		index++;
	}
	while (index2 < ft_strlen(s2))
	{
		str[index] = s2[index2];
		index++;
		index2++;
	}
	str[index] = '\0';
	return (str);
}
