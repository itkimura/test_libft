/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:47:49 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 16:53:17 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isdigit_check(void)
{
	char a = '1';
	char b = '0';
	char c = '4';
	char d = 'A';

	ft_putstr("\n==========isdigit test===========\n");
	ft_putstr("a = ");
	ft_putchar(a);
	ft_putstr("\nisdigit = ");
	ft_putnbr(isdigit(a));
	ft_putstr("\nft_isdigit = ");
	ft_putnbr(ft_isdigit(a));
	ft_putstr("\nb = ");
	ft_putchar(b);
	ft_putstr("\nisdigit = ");
	ft_putnbr(isdigit(b));
	ft_putstr("\nft_isdigit = ");
	ft_putnbr(ft_isdigit(b));
	ft_putstr("\nc = ");
	ft_putchar(c);
	ft_putstr("\nisdigit = ");
	ft_putnbr(isdigit(c));
	ft_putstr("\nft_isdigit = ");
	ft_putnbr(ft_isdigit(c));
	ft_putstr("\nd = ");
	ft_putchar(d);
	ft_putstr("\nisdigit = ");
	ft_putnbr(isdigit(d));
	ft_putstr("\nft_isdigit = ");
	ft_putnbr(ft_isdigit(d));
	ft_putstr("\n==================================\n");
	print_result("isdigit", isdigit_test());
}

int	isdigit_test(void)
{
	char a = '1';
	char b = '0';
	char c = '4';
	char d = 'A';

	if(isdigit(a) == ft_isdigit(a) &&
		isdigit(b) == ft_isdigit(b) &&
		isdigit(c) == ft_isdigit(c) &&
		isdigit(d) == ft_isdigit(d))
		return (1);
	else
		return (0);
}
