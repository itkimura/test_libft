/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:21:40 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/01 17:35:59 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_atoi(void)
{
	char	*s1;

	s1 = "    123456";
	ft_putstr("\n==========atoi test=============\n");
	ft_putstr("atoi\t\t= ");
	ft_putnbr(atoi(s1));
	ft_putstr("\nft_atoi\t\t= ");
	ft_putnbr(ft_atoi(s1));
	s1 = "    -123456";
	ft_putstr("\natoi\t\t= ");
	ft_putnbr(atoi(s1));
	ft_putstr("\nft_atoi\t\t= ");
	ft_putnbr(ft_atoi(s1));
	s1 = "    +123456";
	ft_putstr("\natoi\t\t= ");
	ft_putnbr(atoi(s1));
	ft_putstr("\nft_atoi\t\t= ");
	ft_putnbr(ft_atoi(s1));
	s1 = "    -123 456";
	ft_putstr("\natoi\t\t= ");
	ft_putnbr(atoi(s1));
	ft_putstr("\nft_atoi\t\t= ");
	ft_putnbr(ft_atoi(s1));
	s1 = "    -Hive123 456";
	ft_putstr("\natoi\t\t= ");
	ft_putnbr(atoi(s1));
	ft_putstr("\nft_atoi\t\t= ");
	ft_putnbr(ft_atoi(s1));
	s1 = "    2147483649";
	ft_putstr("\natoi\t\t= ");
	ft_putnbr(atoi(s1));
	ft_putstr("\nft_atoi\t\t= ");
	ft_putnbr(ft_atoi(s1));
	ft_putstr("\n================================\n");
}
