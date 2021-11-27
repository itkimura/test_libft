/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:14:07 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:39:04 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strlen_check(void)
{
	const char *s1 = "Hive Helsinki";
	const char *s2 = "Hello World!";

	print_line("ft_strlen");
	if (file_check("ft_strlen"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("strlen\t\t= %lu\n", strlen(s1));
		printf("ft_strlen\t= %zu\n", ft_strlen(s1));
		printf("strlen\t\t= %lu\n", strlen(s2));
		printf("ft_strlen\t= %zu\n", ft_strlen(s2));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	strlen_test(void)
{
	const char *s1 = "Hive Helsinki";
	const char *s2 = "Hello World!";
	if (file_test("ft_strlen"))
	{
		if(strlen(s1) == ft_strlen(s1) && strlen(s2) == ft_strlen(s2))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
