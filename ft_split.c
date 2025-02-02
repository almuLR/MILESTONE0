/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:55:59 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/01 18:33:47 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_n_words(char const *s, char c)
{
	int	n;
	int	w;
	int prev;

	n = 0;
	w = 0;
	prev = 1;
	while (s[n] != '\0')
	{
		if (s[n] == c)
		{
			prev = 1;	
		}
		else if (s[n] != c && prev)
		{
			w++;
			prev = 0;
		}
		n++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	int	w;
	int i;
	int	j;
	int	n;

	if (!s)
		return (NULL);
	w = ft_n_words(s, c);
	if (w == 0)
		return (NULL);
	aux = malloc((w + 1) * sizeof(char *));
	if (!aux)
		return (NULL);
	i = 0;
	n = 0;
	while (n < w)
	{
		aux[n] = ft_get_word(s, c, &i);
		if (!aux[n])
		{
			while (n > 0) // Free en caso de fallo
				free(aux[--n]);
			free(aux);
			return (NULL);
		}
		n++;
	}
	aux[n] = NULL;
	return (aux);
}

/*#include <stdio.h>
int main(){
	printf("%d\n", ft_n_words(" hola que tal ", ' '));
	printf("%d\n", ft_n_words("a----hola--que-tal-a", '-'));
		printf("%d\n", ft_n_words("----", '-'));

	return (0);

}*/