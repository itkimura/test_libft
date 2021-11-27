/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:42:01 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:48:21 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strnew_check(void)
{
	char	*s1;
	char	*s2;

	s1 = 0;
	s2 = 0;
	print_line("ft_strnew");
	if (file_check("ft_strnew"))
	{
		printf("s1 = %s, address = %p\n", s1, s1);
		printf("s2 = %s, address = %p\n", s2, s2);
		s1 = ft_strnew(13);
		s2 = ft_strnew(12);
		s1 = strcpy(s1, "Hive Helsinki");
		s2 = strcpy(s2, "Hello World!");
		printf("strnew >>>\n");
		printf("s1 = %s, address = %p\n", s1, s1);
		printf("s2 = %s, address = %p\n", s2, s2);
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	strnew_test(void)
{
	char	*s1;
	char	*s2;

	s1 = 0;
	s2 = 0;
	s1 = ft_strnew(13);
	s2 = ft_strnew(12);
	if (file_test("ft_strnew"))
	{
		if (s1 && s2)
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
