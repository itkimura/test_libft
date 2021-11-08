/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:49:30 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 17:10:35 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isascii_check(void)
{
	char	a = 'a';
	char	b = 'B';
	char	c = '4';
	int 	d = 130;

	ft_putstr("\n==========isascii test===========\n");
	ft_putstr("a = ");
	ft_putchar(a);
	ft_putstr("\nisascii = ");
	ft_putnbr(isascii(a));
	ft_putstr("\nft_isascii = ");
	ft_putnbr(ft_isascii(a));
	ft_putstr("\nb = ");
	ft_putchar(b);
	ft_putstr("\nisascii = ");
	ft_putnbr(isascii(b));
	ft_putstr("\nft_isascii = ");
	ft_putnbr(ft_isascii(b));
	ft_putstr("\nc = ");
	ft_putchar(c);
	ft_putstr("\nisascii = ");
	ft_putnbr(isascii(c));
	ft_putstr("\nft_isascii = ");
	ft_putnbr(ft_isascii(c));
	ft_putstr("\nd = ");
	ft_putnbr(d);
	ft_putstr("\nisascii = ");
	ft_putnbr(isascii(d));
	ft_putstr("\nft_isascii = ");
	ft_putnbr(ft_isascii(d));
	ft_putstr("\n=================================\n");
	print_result("isascii", isascii_test());
}

int	isascii_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	if(isascii(a) == ft_isascii(a) &&
		isascii(b) == ft_isascii(b) &&
		isascii(c) == ft_isascii(c) &&
		isascii(d) == ft_isascii(d))
		return (1);
	else
		return (0);
}
