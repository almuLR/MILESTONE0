/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:11:19 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/09 11:20:27 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_equals(const char *haystack, const char *needle, size_t i,
			size_t len)
{
	size_t	j;

	j = 0;
	while (needle[j] != '\0' && (i + j) < len)
	{
		if (needle[j] != haystack[i + j])
			return (0);
		j++;
	}
	return (needle[j] == '\0');
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (is_equals(haystack, needle, i, len))
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
