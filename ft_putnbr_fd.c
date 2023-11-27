/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:33:06 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/08 18:53:49 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nb, fd);
	}
	else if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		c = (nb % 10) + '0';
		ft_putchar_fd(c, fd);
	}
}
