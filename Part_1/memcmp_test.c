/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:27:26 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:37:29 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memcmp_check(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	print_line("ft_memcmp");
	if (file_check("ft_memcmp"))
	{
		printf("memcmp\t\t= %d\n", memcmp(s1, s2, 6));
		printf("ft_memcmp\t= %d\n", ft_memcmp(s1, s2, 6));
		s1 = "Hive";
		s2 = "Hive Helsinki";
		printf("memcmp\t\t= %d\n", memcmp(s1, s2, 5));
		printf("ft_memcmp\t= %d\n", ft_memcmp(s1, s2, 5));
		s1 = "422";
		s2 = "42";
		printf("memcmp\t\t= %d\n", memcmp(s1, s2, 3));
		printf("ft_memcmp\t= %d\n", ft_memcmp(s1, s2, 3));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void		memcmp_test(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Hive";
	char	s4[] = "Hive Helsinki";
	char	s5[] = "422";
	char	s6[] = "42";

	if (file_test("ft_memcmp"))
	{
		if (memcmp(s1, s2, 6) == ft_memcmp(s1, s2, 6))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (memcmp(s3, s4, 5) == ft_memcmp(s3, s4, 5))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (memcmp(s5, s6, 3) == ft_memcmp(s5, s6, 3))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
