/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:49:30 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 16:58:40 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isalnum_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	char d = '8';

	ft_putstr("\n==========isalnum test===========\n");
	ft_putstr("a = ");
	ft_putchar(a);
	ft_putstr("\nisalnum = ");
	ft_putnbr(isalnum(a));
	ft_putstr("\nft_isalnum = ");
	ft_putnbr(ft_isalnum(a));
	ft_putstr("\nb = ");
	ft_putchar(b);
	ft_putstr("\nisalnum = ");
	ft_putnbr(isalnum(b));
	ft_putstr("\nft_isalnum = ");
	ft_putnbr(ft_isalnum(b));
	ft_putstr("\nc = ");
	ft_putchar(c);
	ft_putstr("\nisalnum = ");
	ft_putnbr(isalnum(c));
	ft_putstr("\nft_isalnum = ");
	ft_putnbr(ft_isalnum(c));
	ft_putstr("\nd = ");
	ft_putchar(d);
	ft_putstr("\nisalnum = ");
	ft_putnbr(isalnum(d));
	ft_putstr("\nft_isalnum = ");
	ft_putnbr(ft_isalnum(d));
	ft_putstr("\n==================================\n");
	print_result("isalnum", isalnum_test());
}

int	isalnum_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	char d = '8';

	if(isalnum(a) == ft_isalnum(a) &&
		isalnum(b) == ft_isalnum(b) &&
		isalnum(c) == ft_isalnum(c) &&
		isalnum(d) == ft_isalnum(d))
		return (1);
	else
		return (0);
}
