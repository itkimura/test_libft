/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:54:54 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:42:46 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	toupper_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	print_line("ft_toupper");
	if (file_check("ft_toupper"))
	{
		printf("a\t\t= %c\n", a);
		printf("toupper\t\t= %c\n", toupper(a));
		printf("ft_toupper\t= %c\n", ft_toupper(a));
		printf("----------------------------------\n");
		printf("b\t\t= %c\n", b);
		printf("toupper\t\t= %c\n", toupper(b));
		printf("ft_toupper\t= %c\n", ft_toupper(b));
		printf("----------------------------------\n");
		printf("c\t\t= %c\n", c);
		printf("toupper\t\t= %c\n", toupper(c));
		printf("ft_toupper\t= %c\n", ft_toupper(c));
		printf("----------------------------------\n");
		printf("d\t\t= %c\n", d);
		printf("toupper\t\t= %c\n", toupper(d));
		printf("ft_toupper\t= %c\n", ft_toupper(d));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}


void	toupper_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	if (file_test("ft_toupper"))
	{
		if (toupper(a) == ft_toupper(a))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (toupper(b) == ft_toupper(b))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (toupper(c) == ft_toupper(c))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (toupper(d) == ft_toupper(d))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
