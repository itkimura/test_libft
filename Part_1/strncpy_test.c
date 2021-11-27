/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:49:12 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:41:56 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strncpy_check(void)
{
	char s1[20] = "Hello World!";
	char d1[20] = "Hive Helsinki";
	char s2[20] = "Hello World!";
	char d2[20] = "Hive Helsinki";

	print_line("ft_strncpy");
	if (file_check("ft_strncpy"))
	{
		printf("s1\t\t\t= %s\n", s1);
		printf("d1\t\t\t= %s\n", d1);
		printf("strncpy(d1, 13)\t\t= %s\n", strncpy(d1, s1, 13));
		printf("s2\t\t\t= %s\n", s1);
		printf("d2\t\t\t= %s\n", d1);
		printf("ft_strncpy(d2, 13)\t= %s\n", ft_strncpy(d2, s2, 13));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	strncpy_test(void)
{
	char s1[20] = "Hello World!";
	char d1[20] = "Hive Helsink";
	char s2[20] = "Hello World!";
	char d2[20] = "Hive Helsink";
	char s3[20] = "Hello World!";
	char d3[20];
	char s4[20] = "Hello World!";
	char d4[20];

	if (file_test("ft_strncpy"))
	{
		if (!(strcmp(strncpy(d1, s1, 6), ft_strncpy(d2, s2, 6))))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!(strcmp(strncpy(d3, s3, 15), ft_strncpy(d4, s4, 15))))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
