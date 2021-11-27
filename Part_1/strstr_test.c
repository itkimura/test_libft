/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:29:44 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:47:30 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strstr_check(void)
{
	const char	s1[] = "Hive Helsinki";
	const char	s2[] = "Hive";
	const char	s3[] = "Hello World!";

	print_line("ft_strstr");
	if (file_check("ft_strstr"))
	{
		printf("s1\t\t= %s\n", (char *)s1);
		printf("s2\t\t= %s\n", (char *)s2);
		printf("strstr\t\t= %s\n", strstr(s1, s2));
		printf("ft_strstr\t= %s\n", ft_strstr(s1, s2));
		printf("s3\t\t= %s\n", (char *)s3);
		printf("s2\t\t= %s\n", (char *)s2);
		printf("strstr\t\t= %s\n", strstr(s3, s2));
		printf("ft_strstr\t= %s\n", ft_strstr(s3, s2));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	strstr_test(void)
{
	const char	s1[] = "Hive Helsinki";
	const char	s2[] = "Hive";
	const char	s3[] = "Hello World!";

	if (file_test("ft_strstr"))
	{
		if (!(strcmp(strstr(s1, s2), ft_strstr(s1, s2))))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strstr(s3, s2) && !ft_strstr(s3, s2))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
