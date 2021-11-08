/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:56:14 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 17:11:56 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	tolower_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	ft_putstr("\n==========tolower test===========\n");
	ft_putstr("a = ");
	ft_putchar(a);
	ft_putstr("\ntolower = ");
	ft_putnbr(tolower(a));
	ft_putstr("\nft_tolower = ");
	ft_putnbr(ft_tolower(a));
	ft_putstr("\nb = ");
	ft_putchar(b);
	ft_putstr("\ntolower = ");
	ft_putnbr(tolower(b));
	ft_putstr("\nft_tolower = ");
	ft_putnbr(ft_tolower(b));
	ft_putstr("\nc = ");
	ft_putchar(c);
	ft_putstr("\ntolower = ");
	ft_putnbr(tolower(c));
	ft_putstr("\nft_tolower = ");
	ft_putnbr(ft_tolower(c));
	ft_putstr("\nd = ");
	ft_putchar(d);
	ft_putstr("\ntolower = ");
	ft_putnbr(tolower(d));
	ft_putstr("\nft_tolower = ");
	ft_putnbr(ft_tolower(d));
	ft_putstr("\n=================================\n");
	print_result("tolower", tolower_test());
}

int	tolower_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	if(tolower(a) == ft_tolower(a) &&
		tolower(b) == ft_tolower(b) &&
		tolower(c) == ft_tolower(c) &&
		tolower(d) == ft_tolower(d))
		return (1);
	else
		return (0);
}
