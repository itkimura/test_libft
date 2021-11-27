/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:00:38 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:34:43 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memmove_check(void)
{
	char	s1[20] = "Hive Helsinki";
	char	s2[] = "Hive Helsinki";
	char	s3[] = "Hello World!";
	char	s4[] = "Hello World!";

	print_line("ft_memmove");
	if (file_check("ft_memmove"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("memmove\t\t= %s\n", (char *)memmove(&s1[5], &s1[0], 5));
		printf("ft_memmove\t= %s\n", (char *)ft_memmove(&s2[5], &s2[0], 5));
		printf("s2\t\t= %s\n", s3);
		printf("memmove\t\t= %s\n", (char *)memmove(&s3[0], &s3[6], 5));
		printf("ft_memmove\t= %s\n", (char *)ft_memmove(&s4[0], &s4[6], 5));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	memmove_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hive Helsinki";
	char	s3[] = "Hello World!";
	char	s4[] = "Hello World!";

	if (file_test("ft_memmove"))
	{
		if (!strcmp(memmove(&s1[5], &s1[0], 4), ft_memmove(&s2[5], &s2[0], 4)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strcmp(memmove(&s3[0], &s3[5], 4), ft_memmove(&s4[0], &s4[5], 4)))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
