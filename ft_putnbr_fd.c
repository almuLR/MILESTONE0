/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:29:26 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/03 12:22:28 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	src[11];

	i = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
		return ((void)write(fd, "0", 1));
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	while (n > 0)
	{
		src[i++] = (n % 10) + '0';
		n = n / 10;
	}
	while (--i >= 0)
		write(fd, &src[i], 1);
}
