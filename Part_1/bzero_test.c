/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:14:40 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:20:45 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	bzero_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hive Helsinki";
	char	s3[] = "Hello World!";
	char	s4[] = "Hello World!";

	print_line("ft_bzero");
	if (file_check("ft_bzero"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("bzero\t\t= %s\n", (char *)bzero(s1, 4));
		ft_bzero(s2, 4);
		printf("ft_bzero\t= %s\t\n", s2);
		printf("s2\t\t= %s\n", s3);
		printf("bzero\t\t= %s\n", (char *)bzero(s3, 5));
		ft_bzero(s4, 5);
		printf("ft_bzero\t= %s\n", s4);
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	bzero_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hive Helsinki";
	char	s3[] = "Hello World!";
	char	s4[] = "Hello World!";

	bzero(s1, 4);
	ft_bzero(s2, 4);
	bzero(s3, 5);
	ft_bzero(s4, 5);
	file_test("ft_bzero");
	if (!strcmp(s1, s2))
		printf("\x1b[36mOK\033[m ");
	else
		printf("\x1b[33mKO\033[m ");
	
	if (!strcmp(s3, s4))
		printf("\x1b[36mOK\033[m\n");
	else
		printf("\x1b[33mKO\033[m\n");
}
