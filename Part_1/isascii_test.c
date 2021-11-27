/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:49:30 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:36:28 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isascii_check(void)
{
	char	a = 'a';
	char	b = 'B';
	char	c = '4';
	int 	d = 130;

	print_line("ft_isascii");
	if (file_check("ft_isascii"))
	{
		printf("a\t\t= %c\n", a);
		printf("isascii\t\t= %d\n", isascii(a));
		printf("ft_isascii\t= %d\n", ft_isascii(a));
		printf("----------------------------------\n");
		printf("b\t\t= %c\n", b);
		printf("isascii\t\t= %d\n", isascii(b));
		printf("ft_isascii\t= %d\n", ft_isascii(b));
		printf("----------------------------------\n");
		printf("c\t\t= %c\n", c);
		printf("isascii\t\t= %d\n", isascii(c));
		printf("ft_isascii\t= %d\n", ft_isascii(c));
		printf("----------------------------------\n");
		printf("d\t\t= %c\n", d);
		printf("isascii\t\t= %d\n", isascii(d));
		printf("ft_isascii\t= %d\n", ft_isascii(d));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	isascii_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	if (file_test("ft_isascii"))
	{
		if (isascii(a) == ft_isascii(a))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isascii(b) == ft_isascii(b))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isascii(c) == ft_isascii(c))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isascii(d) == ft_isascii(d))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
