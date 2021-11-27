/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:24:17 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:43:57 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
void	strncat_check(void)
{
	char s1[20] = "Hive ";
	char s2[] = "Helsinki";
	char s3[20] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	print_line("ft_strncat");
	if (file_check("ft_strcat"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("strncat\t\t= %s\n", strncat(s1, s2, 3));
		printf("ft_strncat\t= %s\n", ft_strncat(s5, s6, 3));
		printf("s3\t\t= %s\n", s3);
		printf("s4\t\t= %s\n", s4);
		printf("strncat\t\t= %s\n", strncat(s3, s4, 10));
		printf("ft_strncat\t= %s\n", ft_strncat(s7, s8, 10));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	strncat_test(void)
{
	char s1[20] = "Hive ";
	char s2[] = "Helsinki";
	char s3[20] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	if (file_test("ft_strncat"))
	{
		if (!strcmp(strncat(s1, s2, 3), ft_strncat(s5, s6, 3)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strcmp(strncat(s3, s4, 10), ft_strncat(s7, s8, 10)))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
