/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:05:46 by almudenalop       #+#    #+#             */
/*   Updated: 2025/01/31 10:24:44 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		n;
	char	*aux;

	n = strlen(s1) + 1;
	aux = malloc(n);
	if (aux != NULL)
	{
		ft_strlcpy(aux, s1, n);
		return (aux);
	}
	return (NULL);
}
