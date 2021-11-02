/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:39:32 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/02 18:11:03 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	check_strcmp(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	ft_putstr("\n==========strcmp test===========\n");
	ft_putstr("strcmp\t\t= ");
	ft_putnbr(strcmp(s1, s2));
	ft_putstr("\nft_strcmp\t= ");
	ft_putnbr(ft_strcmp(s1, s2));
	s1 = "Hive";
	s2 = "Hive Helsinki";
	ft_putstr("\nstrcmp\t\t= ");
	ft_putnbr(strcmp(s1, s2));
	ft_putstr("\nft_strcmp\t= ");
	ft_putnbr(ft_strcmp(s1, s2));
	s1 = "422";
	s2 = "42";
	ft_putstr("\nstrcmp\t\t= ");
	ft_putnbr(strcmp(s1, s2));
	ft_putstr("\nft_strcmp\t= ");
	ft_putnbr(ft_strcmp(s1, s2));
	ft_putstr("\n================================\n");
	print_result("strcmp", test_strcmp());
}

int		test_strcmp(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Hive";
	char	s4[] = "Hive Helsinki";
	char	s5[] = "422";
	char	s6[] = "42";

	if (strcmp(s1, s2) == ft_strcmp(s1, s2) &&
		strcmp(s3, s4) == ft_strcmp(s3, s4) &&
		strcmp(s5, s6) == ft_strcmp(s5, s6))
	 	return (0);
	else
		return (1);
}
