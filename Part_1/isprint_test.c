/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:53:59 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 17:11:07 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isprint_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	ft_putstr("\n==========isprint test===========\n");
	ft_putstr("a = ");
	ft_putchar(a);
	ft_putstr("\nisprint = ");
	ft_putnbr(isprint(a));
	ft_putstr("\nft_isprint = ");
	ft_putnbr(ft_isprint(a));
	ft_putstr("\nb = ");
	ft_putchar(b);
	ft_putstr("\nisprint = ");
	ft_putnbr(isprint(b));
	ft_putstr("\nft_isprint = ");
	ft_putnbr(ft_isprint(b));
	ft_putstr("\nc = ");
	ft_putchar(c);
	ft_putstr("\nisprint = ");
	ft_putnbr(isprint(c));
	ft_putstr("\nft_isprint = ");
	ft_putnbr(ft_isprint(c));
	ft_putstr("\nd = ");
	ft_putchar(d);
	ft_putstr("\nisprint = ");
	ft_putnbr(isprint(d));
	ft_putstr("\nft_isprint = ");
	ft_putnbr(ft_isprint(d));
	ft_putstr("\n=================================\n");
	print_result("isprint", isprint_test());
}

int	isprint_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	if(isprint(a) == ft_isprint(a) &&
		isprint(b) == ft_isprint(b) &&
		isprint(c) == ft_isprint(c) &&
		isprint(d) == ft_isprint(d))
		return (1);
	else
		return (0);
}
