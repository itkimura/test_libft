/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:39:32 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:52:04 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strcmp_check(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	print_line("ft_strcmp");
	if (file_check("ft_strcmp"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("strcmp\t\t= %d\n", strcmp(s1, s2));
		printf("ft_strcmp\t= %d\n", ft_strcmp(s1, s2));
		s1 = "Hive";
		s2 = "Hive Helsinki";
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("strcmp\t\t= %d\n", strcmp(s1, s2));
		printf("ft_strcmp\t= %d\n", ft_strcmp(s1, s2));
		s1 = "422";
		s2 = "42";
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("strcmp\t\t= %d\n", strcmp(s1, s2));
		printf("ft_strcmp\t= %d\n", ft_strcmp(s1, s2));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void		strcmp_test(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Hive";
	char	s4[] = "Hive Helsinki";
	char	s5[] = "422";
	char	s6[] = "42";

	if (file_test("ft_strcmp"))
	{
		if (strcmp(s1, s2) == ft_strcmp(s1, s2))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (strcmp(s3, s4) == ft_strcmp(s3, s4))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (strcmp(s5, s6) == ft_strcmp(s5, s6))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
