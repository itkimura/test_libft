/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:54:54 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 17:11:34 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	toupper_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	ft_putstr("\n==========toupper test===========\n");
	ft_putstr("a = ");
	ft_putchar(a);
	ft_putstr("\ntoupper = ");
	ft_putnbr(toupper(a));
	ft_putstr("\nft_toupper = ");
	ft_putnbr(ft_toupper(a));
	ft_putstr("\nb = ");
	ft_putchar(b);
	ft_putstr("\ntoupper = ");
	ft_putnbr(toupper(b));
	ft_putstr("\nft_toupper = ");
	ft_putnbr(ft_toupper(b));
	ft_putstr("\nc = ");
	ft_putchar(c);
	ft_putstr("\ntoupper = ");
	ft_putnbr(toupper(c));
	ft_putstr("\nft_toupper = ");
	ft_putnbr(ft_toupper(c));
	ft_putstr("\nd = ");
	ft_putchar(d);
	ft_putstr("\ntoupper = ");
	ft_putnbr(toupper(d));
	ft_putstr("\nft_toupper = ");
	ft_putnbr(ft_toupper(d));
	ft_putstr("\n=================================\n");
	print_result("toupper", toupper_test());
}

int	toupper_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	if(toupper(a) == ft_toupper(a) &&
		toupper(b) == ft_toupper(b) &&
		toupper(c) == ft_toupper(c) &&
		toupper(d) == ft_toupper(d))
		return (1);
	else
		return (0);
}
