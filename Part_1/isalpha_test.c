/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:20:18 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 16:52:29 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isalpha_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	char d = '\n';

	ft_putstr("\n==========isalpha test===========\n");
	ft_putstr("a = ");
	ft_putchar(a);
	ft_putstr("\nisalpha = ");
	ft_putnbr(isalpha(a));
	ft_putstr("\nft_isalpha = ");
	ft_putnbr(ft_isalpha(a));
	ft_putstr("\nb = ");
	ft_putchar(b);
	ft_putstr("\nisalpha = ");
	ft_putnbr(isalpha(b));
	ft_putstr("\nft_isalpha = ");
	ft_putnbr(ft_isalpha(b));
	ft_putstr("\nc = ");
	ft_putchar(c);
	ft_putstr("\nisalpha = ");
	ft_putnbr(isalpha(c));
	ft_putstr("\nft_isalpha = ");
	ft_putnbr(ft_isalpha(c));
	ft_putstr("\nd = ");
	ft_putchar(d);
	ft_putstr("\nisalpha = ");
	ft_putnbr(isalpha(d));
	ft_putstr("\nft_isalpha = ");
	ft_putnbr(ft_isalpha(d));
	ft_putstr("\n==================================\n");
	print_result("isalpha", isalpha_test());
}

int	isalpha_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	char d = '\n';

	if(isalpha(a) == ft_isalpha(a) &&
		isalpha(b) == ft_isalpha(b) &&
		isalpha(c) == ft_isalpha(c) &&
		isalpha(d) == ft_isalpha(d))
		return (1);
	else
		return (0);
}
