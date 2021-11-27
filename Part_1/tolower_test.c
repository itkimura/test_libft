/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:56:14 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:42:36 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	tolower_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	print_line("ft_tolower");
	if (file_check("ft_tolower"))
	{
		printf("a\t\t= %c\n", a);
		printf("tolower\t\t= %c\n", tolower(a));
		printf("ft_tolower\t= %c\n", ft_tolower(a));
		printf("----------------------------------\n");
		printf("b\t\t= %c\n", b);
		printf("tolower\t\t= %c\n", tolower(b));
		printf("ft_tolower\t= %c\n", ft_tolower(b));
		printf("----------------------------------\n");
		printf("c\t\t= %c\n", c);
		printf("tolower\t\t= %c\n", tolower(c));
		printf("ft_tolower\t= %c\n", ft_tolower(c));
		printf("----------------------------------\n");
		printf("d\t\t= %c\n", d);
		printf("tolower\t\t= %c\n", tolower(d));
		printf("ft_tolower\t= %c\n", ft_tolower(d));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	tolower_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	int d = 130;

	if (file_test("ft_tolower"))
	{
		if (tolower(a) == ft_tolower(a))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (tolower(b) == ft_tolower(b))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (tolower(c) == ft_tolower(c))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (tolower(d) == ft_tolower(d))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
