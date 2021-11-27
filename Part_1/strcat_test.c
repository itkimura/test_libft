/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:24:17 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:43:00 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
void	strcat_check(void)
{
	char s1[20] = "Hive ";
	char s2[] = "Helsinki";
	char s3[20] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	print_line("ft_strcat");
	if (file_check("ft_strcat"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("strcat\t\t= %s\n", strcat(s1, s2));
		printf("ft_strcat\t= %s\n", ft_strcat(s5, s6));
		printf("s3\t\t= %s\n", s3);
		printf("s4\t\t= %s\n", s4);
		printf("strcat\t\t= %s\n", strcat(s3, s4));
		printf("ft_strcat\t= %s\n", ft_strcat(s7, s8));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void		strcat_test(void)
{
	char s1[20] = "Hive ";
	char s2[] = "Helsinki";
	char s3[20] = "Hello ";
	char s4[] = "World!";
	char s5[20] = "Hive ";
	char s6[] = "Helsinki";
	char s7[20] = "Hello ";
	char s8[] = "World!";

	if (file_test("ft_strcat"))
	{
		if (!strcmp(strcat(s1, s2), ft_strcat(s5, s6)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strcmp(strcat(s3, s4), ft_strcat(s7, s8)))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
