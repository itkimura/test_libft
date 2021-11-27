/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:21:01 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:40:08 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strdup_check(void)
{
	const char *s1 = "Hive Helsinki";
	const char *s2 = "Hello World!";

	print_line("ft_strdup");
	if (file_check("ft_strdup"))
	{
		printf("strdup\t\t= %s\n", strdup(s1));
		printf("ft_strdup\t= %s\n", ft_strdup(s1));
		printf("strdup\t\t= %s\n", strdup(s2));
		printf("ft_strdup\t= %s\n", ft_strdup(s2));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	strdup_test(void)
{
	const char *s1 = "Hive Helsinki";
	const char *s2 = "Hello World!";

	if (file_test("ft_strdup"))
	{
		if(!(strcmp(strdup(s1), ft_strdup(s1))) && !(strcmp(strdup(s2), ft_strdup(s2))))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
