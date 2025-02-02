/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:05:46 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/02 15:19:45 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		n;
	char	*aux;

	n = ft_strlen(s1) + 1;
	aux = malloc(n);
	if (aux != NULL)
	{
		ft_strlcpy(aux, s1, n);
		return (aux);
	}
	return (NULL);
}
