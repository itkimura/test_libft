/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:57:48 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:32:36 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memcpy_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	*s3 = NULL;
	char	*s4 = NULL;

	print_line("ft_memcpy");
	if (file_check("ft_memcpy"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("memcpy\t\t= %s\n", (char *)memcpy(s1, s2, 4));
		printf("ft_memcpy\t= %s\n", (char *)ft_memcpy(s1, s2, 4));
		printf("s3\t\t= %s\n", s3);
		printf("s4\t\t= %s\n", s4);
		printf("memcpy\t\t= %s\n", (char *)memcpy(s3, s4, 5));
		printf("ft_memcpy\t= %s\n", (char *)ft_memcpy(s3, s4, 5));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	memcpy_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	*s3 = NULL;
	char	*s4 = NULL;

	if (file_test("ft_memcpy"))
	{
		if (!strcmp(memcpy(s1, s2, 4), ft_memcpy(s1, s2, 4)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if ((memcpy(s3, s4, 5) == 0 && ft_memcpy(s3, s4, 5) == 0))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
