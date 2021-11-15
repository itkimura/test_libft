/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:27:26 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/15 16:30:14 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memcmp_check(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	ft_putstr("\n==========memcmp test===========\n");
	ft_putstr("memcmp\t\t= ");
	ft_putnbr(memcmp(s1, s2, 6));
	ft_putstr("\nft_memcmp\t= ");
	ft_putnbr(ft_memcmp(s1, s2, 6));
	s1 = "Hive";
	s2 = "Hive Helsinki";
	ft_putstr("\nmemcmp\t\t= ");
	ft_putnbr(memcmp(s1, s2, 5));
	ft_putstr("\nft_memcmp\t= ");
	ft_putnbr(ft_memcmp(s1, s2, 5));
	s1 = "422";
	s2 = "42";
	ft_putstr("\nmemcmp\t\t= ");
	ft_putnbr(memcmp(s1, s2, 3));
	ft_putstr("\nft_memcmp\t= ");
	ft_putnbr(ft_memcmp(s1, s2, 3));
	ft_putstr("\n================================\n");
	print_result("memcmp", memcmp_test());
}

int		memcmp_test(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Hive";
	char	s4[] = "Hive Helsinki";
	char	s5[] = "422";
	char	s6[] = "42";

	if (memcmp(s1, s2, 6) == ft_memcmp(s1, s2, 6) &&
		memcmp(s3, s4, 5) == ft_memcmp(s3, s4, 5) &&
		memcmp(s5, s6, 3) == ft_memcmp(s5, s6, 3))
	 	return (1);
	else
		return (0);
}
