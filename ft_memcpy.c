/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:19:59 by almudenalop       #+#    #+#             */
/*   Updated: 2025/01/28 18:37:06 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*aux;
	size_t				i;
	const unsigned char	*aux2;

	aux = (unsigned char *restrict)dst;
	aux2 = (void *restrict)src;
	i = 0;
	while (i < n)
	{
		aux[i] = aux2[i];
		i++;
	}
	return (dst);
}
