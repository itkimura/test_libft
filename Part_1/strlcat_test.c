/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:31:38 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 15:08:57 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strlcat_check(void)
{
	char s1[30] = "Hive ";
	char s2[] = "Helsinki";
	char s3[30] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	ft_putstr("\n==========strlcat test===========\n");
	ft_putstr("s1 = ");
	ft_putstr(s1);
	ft_putstr("\ns2 = ");
	ft_putstr(s2);
	ft_putstr("\nstrlcat = ");
	ft_putnbr(strlcat(s1, s2, 10));
	ft_putstr("\nft_strlcat = ");
	ft_putnbr(ft_strlcat(s5, s6, 10));
	ft_putstr("\ns3 = ");
	ft_putstr(s3);
	ft_putstr("\ns4 = ");
	ft_putstr(s4);
	ft_putstr("\nstrlcat = ");
	ft_putnbr(strlcat(s3, s4, 20));
	ft_putstr("\nft_strlcat = ");
	ft_putnbr(ft_strlcat(s7, s8, 20));
	ft_putstr("\n================================\n");
	print_result("strlcat", strlcat_test());
}

int		strlcat_test(void)
{
	char s1[30] = "Hive ";
	char s2[] = "Helsinki";
	char s3[30] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	if (strlcat(s1, s2, 10) == ft_strlcat(s5, s6, 10) &&
		strlcat(s3, s4, 20) == ft_strlcat(s7, s8, 20))
		return (1);
	else
		return (0);
}
