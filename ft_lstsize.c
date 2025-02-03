/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:36:02 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/03 13:40:00 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		n;
	t_list	*aux;
	
	n = 0;
	while(aux->next != NULL)
	{
		n++;
		aux = aux->next;
	}
}