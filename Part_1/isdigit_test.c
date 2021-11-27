/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:47:49 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:27:12 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isdigit_check(void)
{
	char a = '1';
	char b = '0';
	char c = '4';
	char d = 'A';

	print_line("ft_isdigit");
	if (file_check("ft_isdigit"))
	{
		printf("a\t\t= %c\n", a);
		printf("isdigit\t\t= %d\n", isdigit(a));
		printf("ft_isdigit\t= %d\n", ft_isdigit(a));
		printf("----------------------------------\n");
		printf("b\t\t= %c\n", b);
		printf("isdigit\t\t= %d\n", isdigit(b));
		printf("ft_isdigit\t= %d\n", ft_isdigit(b));
		printf("----------------------------------\n");
		printf("c\t\t= %c\n", c);
		printf("isdigit\t\t= %d\n", isdigit(c));
		printf("ft_isdigit\t= %d\n", ft_isdigit(c));
		printf("----------------------------------\n");
		printf("d\t\t= %c\n", d);
		printf("isdigit\t\t= %d\n", isdigit(d));
		printf("ft_isdigit\t= %d\n", ft_isdigit(d));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	isdigit_test(void)
{
	char a = '1';
	char b = '0';
	char c = '4';
	char d = 'A';

	if (file_test("ft_isdigit"))
	{
		if (isdigit(a) == ft_isdigit(a))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isdigit(b) == ft_isdigit(b))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isdigit(c) == ft_isdigit(c))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isdigit(d) == ft_isdigit(d))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
