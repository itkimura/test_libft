/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:24:17 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/10 16:48:55 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
void	strncat_check(void)
{
	char s1[20] = "Hive ";
	char s2[] = "Helsinki";
	char s3[20] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	ft_putstr("\n==========strncat test===========\n");
	ft_putstr("s1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\ns2\t\t= ");
	ft_putstr(s2);
	ft_putstr("\nstrncat\t\t= ");
	ft_putstr(strncat(s1, s2, 3));
	ft_putstr("\nft_strncat\t= ");
	ft_putstr(ft_strncat(s5, s6, 3));
	ft_putstr("\ns3\t\t= ");
	ft_putstr(s3);
	ft_putstr("\ns4\t\t= ");
	ft_putstr(s4);
	ft_putstr("\nstrncat\t\t= ");
	ft_putstr(strncat(s3, s4, 10));
	ft_putstr("\nft_strncat\t= ");
	ft_putstr(ft_strncat(s7, s8, 10));
	ft_putstr("\n================================\n");
	print_result("strncat", strncat_test());
}

int		strncat_test(void)
{
	char s1[20] = "Hive ";
	char s2[] = "Helsinki";
	char s3[20] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	if (!strcmp(strncat(s1, s2, 3), ft_strncat(s5, s6, 3)) &&
		!strcmp(strncat(s3, s4, 10), ft_strncat(s7, s8, 10)))
		return (1);
	else
		return (0);
}
