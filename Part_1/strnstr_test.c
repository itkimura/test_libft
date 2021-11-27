/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:29:44 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:47:44 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strnstr_check(void)
{
	const char	s1[] = "Hive Helsinki";
	const char	s2[] = "Hive";
	const char	s3[] = "Hello World!";

	print_line("ft_strnstr");
	if (file_check("ft_strnstr"))
	{
		printf("strnstr\t\t= %s\n", strnstr(s1, s2, 4));
		printf("ft_strnstr\t= %s\n", ft_strnstr(s1, s2, 4));
		printf("strnstr\t\t= %s\n", strnstr(s3, s2, 10));
		printf("ft_strnstr\t= %s\n", ft_strnstr(s3, s2, 10));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void		strnstr_test(void)
{
	const char	s1[] = "Hive Helsinki";
	const char	s2[] = "Hive";
	const char	s3[] = "Hello World!";

	if (file_test("ft_strnstr"))
	{
		if (!(strcmp(strnstr(s1, s2, 4), ft_strnstr(s1, s2, 4))))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strnstr(s3, s2, 2) && !ft_strnstr(s3, s2, 2))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
