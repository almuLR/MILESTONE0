/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:26:55 by almlopez          #+#    #+#             */
/*   Updated: 2025/02/02 20:45:50 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*result;
	int		aux;
	int		i;
	int		neg;
	int		aux2;

	aux = n;
	i = 0;
	neg = 0;
	if (n == 0)
		i = 1;
	if (n == 0)
    {
        result = (char *)malloc(2 * sizeof(char));
        if (!result)
            return (NULL);
        result[0] = '0';
        result[1] = '\0';
        return (result);
    }
	if (n < 0)
    {
        neg = 1;
        if (n == -2147483648)
            return (ft_strdup("-2147483648"));
        aux = -n;
    }
	aux2 = aux;
	while (aux2 != 0)
	{
		aux2 = aux2 / 10;
		i++;
	}
	result = (char *)malloc((i+ neg + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[i + neg] = '\0';
	aux = n;
	while (i > 0)
	{
		result[i + neg - 1] = (aux % 10) + '0';
		aux = aux / 10;
		i--;
	}
	if (neg)
        result[0] = '-';
	return (result);
}
