/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:43:03 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/03 13:45:54 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strncmp_check(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	ft_putstr("\n==========strncmp test==========\n");
	ft_putstr("strncmp\t\t= ");
	ft_putnbr(strncmp(s1, s2, 3));
	ft_putstr("\nft_strncmp\t= ");
	ft_putnbr(ft_strncmp(s1, s2, 3));
	s1 = "Hive";
	s2 = "Hive Helsinki";
	ft_putstr("\nstrncmp\t\t= ");
	ft_putnbr(strncmp(s1, s2, 10));
	ft_putstr("\nft_strncmp\t= ");
	ft_putnbr(ft_strncmp(s1, s2, 10));
	s1 = "422";
	s2 = "42";
	ft_putstr("\nstrncmp\t\t= ");
	ft_putnbr(strncmp(s1, s2, 3));
	ft_putstr("\nft_strncmp\t= ");
	ft_putnbr(ft_strncmp(s1, s2, 3));
	ft_putstr("\n================================\n");
	print_result("strncmp", strncmp_test());
}

int		strncmp_test(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Hive";
	char	s4[] = "Hive Helsinki";
	char	s5[] = "422";
	char	s6[] = "42";

	if (strncmp(s1, s2, 3) == ft_strncmp(s1, s2, 3) &&
		strncmp(s3, s4, 10) == ft_strncmp(s3, s4, 10) &&
		strncmp(s5, s6, 3) == ft_strncmp(s5, s6, 3))
	 	return (0);
	else
		return (1);
}
