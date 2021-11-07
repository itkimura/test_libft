/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:49:12 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/03 13:43:25 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strcpy_check(void)
{
	char s1[13] = "Hello World!";
	char d1[13] = "Hive Helsink";
	char s2[13] = "Hello World!";
	char d2[13] = "Hive Helsink";

	ft_putstr("\n==========strcpy test===========\n");
	ft_putstr("d1\t\t= ");
	ft_putstr(d1);
	ft_putstr("\nstrcpy\t\t= ");
	strcpy(d1, s1);
	ft_putstr(d1);
	ft_putstr("\nd2\t\t= ");
	ft_putstr(d2);
	ft_strcpy(d2, s2);
	ft_putstr("\nft_strcpy\t= ");
	ft_putstr(d2);
	ft_putstr("\n================================\n");
	print_result("strcpy", strcpy_test());
}

int		strcpy_test(void)
{
	char s1[13] = "Hello World!";
	char d1[13] = "Hive Helsink";
	char s2[13] = "Hello World!";
	char d2[13] = "Hive Helsink";

	if (!(strcmp(strcpy(d1, s1), ft_strcpy(d2, s2))))
		return (0);
	else
		return (1);
}
