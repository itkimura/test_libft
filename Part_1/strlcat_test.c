/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:31:38 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:44:35 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strlcat_check(void)
{
	char s1[30] = "Hive ";
	char s2[] = "Helsinki";
	char s3[30] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	print_line("ft_strlcat");
	if (file_check("ft_strlcat"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("strlcat\t\t= %lu\n", strlcat(s1, s2, 10));
		printf("ft_strlcat\t= %zu\n", ft_strlcat(s5, s6, 10));
		printf("s3\t\t= %s\n", s3);
		printf("s4\t\t= %s\n", s4);
		printf("strlcat\t\t= %lu\n", strlcat(s3, s4, 20));
		printf("ft_strlcat\t= %zu\n", ft_strlcat(s7, s8, 20));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void		strlcat_test(void)
{
	char s1[30] = "Hive ";
	char s2[] = "Helsinki";
	char s3[30] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	if (file_test("ft_strlcat"))
	{
		if (strlcat(s1, s2, 10) == ft_strlcat(s5, s6, 10))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (strlcat(s3, s4, 20) == ft_strlcat(s7, s8, 20))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
