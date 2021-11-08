/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:49:12 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 15:12:09 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strncpy_check(void)
{
	char s1[13] = "Hello World!";
	char d1[13] = "Hive Helsink";
	char s2[13] = "Hello World!";
	char d2[13] = "Hive Helsink";

	ft_putstr("\n==========strncpy test===========\n");
	ft_putstr("d1\t\t= ");
	ft_putstr(d1);
	ft_putstr("\nstrncpy\t\t= ");
	strncpy(d1, s1, 6);
	ft_putstr(d1);
	ft_putstr("\nd2\t\t= ");
	ft_putstr(d2);
	ft_strncpy(d2, s2, 6);
	ft_putstr("\nft_strncpy\t= ");
	ft_putstr(d2);
	ft_putstr("\n================================\n");
	print_result("strncpy", strncpy_test());
}

int		strncpy_test(void)
{
	char s1[13] = "Hello World!";
	char d1[13] = "Hive Helsink";
	char s2[13] = "Hello World!";
	char d2[13] = "Hive Helsink";

	if (!(strcmp(strncpy(d1, s1, 6), ft_strncpy(d2, s2, 6))))
		return (1);
	else
		return (0);
}
