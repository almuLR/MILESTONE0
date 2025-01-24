/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:25:09 by almlopez          #+#    #+#             */
/*   Updated: 2025/01/24 13:04:40 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	m;
	size_t	n;
	size_t	s;
	size_t	i;

	m = ft_strlen(dst);
	n = ft_strlen(src);
	s = size - m;
	i = 0;
	if (size <= m)
	{
		return (n + size);
	}
	if (s > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[m + i] = src[i];
			i++;
		}
		dst[m + i] = '\0';
		
	}
	return (m + n);
}
