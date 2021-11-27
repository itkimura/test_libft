/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:53:59 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:37:24 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isprint_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

		print_line("ft_isprint");
	if (file_check("ft_isprint"))
	{
		printf("a\t\t= %c\n", a);
		printf("isprint\t\t= %d\n", isprint(a));
		printf("ft_isprint\t= %d\n", ft_isprint(a));
		printf("----------------------------------\n");
		printf("b\t\t= %c\n", b);
		printf("isprint\t\t= %d\n", isprint(b));
		printf("ft_isprint\t= %d\n", ft_isprint(b));
		printf("----------------------------------\n");
		printf("c\t\t= %c\n", c);
		printf("isprint\t\t= %d\n", isprint(c));
		printf("ft_isprint\t= %d\n", ft_isprint(c));
		printf("----------------------------------\n");
		printf("d\t\t= %c\n", d);
		printf("isprint\t\t= %d\n", isprint(d));
		printf("ft_isprint\t= %d\n", ft_isprint(d));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	isprint_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	if (file_test("ft_isprint"))
	{
		if (isprint(a) == ft_isprint(a))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isprint(b) == ft_isprint(b))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isprint(c) == ft_isprint(c))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isprint(d) == ft_isprint(d))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
