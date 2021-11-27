/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:43:03 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:56:26 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strncmp_check(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	print_line("ft_strncmp");
	if (file_check("ft_strncmp"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("strncmp\t\t= %d\n", strncmp(s1, s2, 3));
		printf("ft_strncmp\t= %d\n", ft_strncmp(s1, s2, 3));
		s1 = "Hive";
		s2 = "Hive Helsinki";
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("\nstrncmp\t\t= %d\n", strncmp(s1, s2, 10));
		printf("\nft_strncmp\t= %d\n", ft_strncmp(s1, s2, 10));
		s1 = "422";
		s2 = "42";
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("strncmp\t\t= %d\n", strncmp(s1, s2, 3));
		printf("ft_strncmp\t= %d\n", ft_strncmp(s1, s2, 3));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	strncmp_test(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Hive";
	char	s4[] = "Hive Helsinki";
	char	s5[] = "422";
	char	s6[] = "42";

	if (file_test("ft_strncmp"))
	{
		if (strncmp(s1, s2, 3) == ft_strncmp(s1, s2, 3))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (strncmp(s3, s4, 10) == ft_strncmp(s3, s4, 10))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (strncmp(s5, s6, 3) == ft_strncmp(s5, s6, 3))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
