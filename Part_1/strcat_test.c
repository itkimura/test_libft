/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:24:17 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/07 17:48:01 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
void	strcat_check(void)
{
	char s1[20] = "Hive ";
	char s2[] = "Helsinki";
	char s3[20] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	ft_putstr("\n==========strcat test===========\n");
	ft_putstr("s1 = ");
	ft_putstr(s1);
	ft_putstr("\ns2 = ");
	ft_putstr(s2);
	ft_putstr("\nstrcat = ");
	ft_putstr(strcat(s1, s2));
	ft_putstr("\nft_strcat = ");
	ft_putstr(ft_strcat(s5, s6));
	ft_putstr("\ns3 = ");
	ft_putstr(s3);
	ft_putstr("\ns4 = ");
	ft_putstr(s4);
	ft_putstr("\nstrcat = ");
	ft_putstr(strcat(s3, s4));
	ft_putstr("\nft_strcat = ");
	ft_putstr(ft_strcat(s7, s8));
	ft_putstr("\n================================\n");
	print_result("strcat", strcat_test());
}

int		strcat_test(void)
{
	char s1[20] = "Hive ";
	char s2[] = "Helsinki";
	char s3[20] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	if (!strcmp(strcat(s1, s2), ft_strcat(s5, s6)) &&
		!strcmp(strcat(s3, s4), ft_strcat(s7, s8)))
		return (0);
	else
		return (1);
}
