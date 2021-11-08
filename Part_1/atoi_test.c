/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:21:40 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 14:49:03 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	atoi_check(void)
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
	s1 = "    2147483648";
	ft_putstr("\natoi\t\t= ");
	ft_putnbr(atoi(s1));
	ft_putstr("\nft_atoi\t\t= ");
	ft_putnbr(ft_atoi(s1));
	ft_putstr("\n================================\n");
	print_result("atoi", atoi_test());
}

int	atoi_test(void)
{
	char s1[] = "    123456";
	char s2[] = "    -123456";
	char s3[] = "    +123456";
	char s4[] = "    -123 456";
	char s5[] = "    -Hive123 456";
	char s6[] = "    2147483648";

	if (atoi(s1) == ft_atoi(s1) &&
		atoi(s2) == ft_atoi(s2) &&
		atoi(s3) == ft_atoi(s3) &&
		atoi(s4) == ft_atoi(s4) &&
		atoi(s5) == ft_atoi(s5) &&
		atoi(s6) == ft_atoi(s6))
		return (1);
	else
		return (0);
}
