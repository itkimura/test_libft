/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:49:12 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/10 18:16:48 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strncpy_check(void)
{
	char s1[20] = "Hello World!";
	char d1[20] = "Hive Helsinki";
	char s2[20] = "Hello World!";
	char d2[20] = "Hive Helsinki";

	ft_putstr("\n==========strncpy test===========\n");
	ft_putstr("d1\t\t= ");
	ft_putstr(d1);
	ft_putstr("\nstrncpy\t\t= ");
	strncpy(d1, s1, 13);
	ft_putstr(d1);
	ft_putstr("\nd2\t\t= ");
	ft_putstr(d2);
	ft_strncpy(d2, s2, 13);
	ft_putstr("\nft_strncpy\t= ");
	ft_putstr(d2);
	ft_putstr("\n================================\n");
	print_result("strncpy", strncpy_test());
}

int		strncpy_test(void)
{
	char s1[20] = "Hello World!";
	char d1[20] = "Hive Helsink";
	char s2[20] = "Hello World!";
	char d2[20] = "Hive Helsink";
	char s3[20] = "Hello World!";
	char d3[20];
	char s4[20] = "Hello World!";
	char d4[20];

	if (!(strcmp(strncpy(d1, s1, 6), ft_strncpy(d2, s2, 6)))
	 && !(strcmp(strncpy(d3, s3, 15), ft_strncpy(d4, s4, 15))))
		return (1);
	else
		return (0);
}
