/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:49:30 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:35:21 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isalnum_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	char d = '\t';

	print_line("ft_isalnum");
	if (file_check("ft_isalnum"))
	{
	printf("a\t\t= %c\n", a);
	printf("isalnum\t\t= %d\n", isalnum(a));
	printf("ft_isalnum\t= %d\n", ft_isalnum(a));
	printf("----------------------------------\n");
	printf("b\t\t= %c\n", b);
	printf("isalnum\t\t= %d\n", isalnum(b));
	printf("ft_isalnum\t= %d\n", ft_isalnum(b));
	printf("----------------------------------\n");
	printf("c\t\t= %c\n", c);
	printf("isalnum\t\t= %d\n", isalnum(c));
	printf("ft_isalnum\t= %d\n", ft_isalnum(c));
	printf("----------------------------------\n");
	printf("d\t\t= %d (\\t) \n", d);
	printf("isalnum\t\t= %d\n", isalnum(d));
	printf("ft_isalnum\t= %d\n", ft_isalnum(d));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	isalnum_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	char d = '8';

	if (file_test("ft_isalnum"))
	{
		if (isalnum(a) == ft_isalnum(a))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isalnum(b) == ft_isalnum(b))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isalnum(c) == ft_isalnum(c))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isalnum(d) == ft_isalnum(d))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
