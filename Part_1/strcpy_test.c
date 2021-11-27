/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:49:12 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:41:05 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strcpy_check(void)
{
	char s1[13] = "Hello World!";
	char d1[13] = "Hive Helsink";
	char s2[13] = "Hello World!";
	char d2[13] = "Hive Helsink";

	print_line("ft_strcpy");
	if (file_check("ft_strcpy"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("d1\t\t= %s\n", d1);
		printf("strcpy(d1)\t= %s\n", strcpy(d1, s1));
		printf("s2\t\t= %s\n", s2);
		printf("d2\t\t= %s\n", d2);
		printf("ft_strcpy(d2)\t= %s\n", ft_strcpy(d2, s2));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void		strcpy_test(void)
{
	char s1[13] = "Hello World!";
	char d1[13] = "Hive Helsink";
	char s2[13] = "Hello World!";
	char d2[13] = "Hive Helsink";

	if (file_test("ft_strcpy"))
	{
		if (!(strcmp(strcpy(d1, s1), ft_strcpy(d2, s2))))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
