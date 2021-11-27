/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:20:18 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:23:40 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	isalpha_check(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	char d = '\t';

	print_line("ft_isalpha");
	if (file_check("ft_isalpha"))
	{
	printf("a\t\t= %c\n", a);
	printf("isalpha\t\t= %d\n", isalpha(a));
	printf("ft_isalpha\t= %d\n", ft_isalpha(a));
	printf("----------------------------------\n");
	printf("b\t\t= %c\n", b);
	printf("isalpha\t\t= %d\n", isalpha(b));
	printf("ft_isalpha\t= %d\n", ft_isalpha(b));
	printf("----------------------------------\n");
	printf("c\t\t= %c\n", c);
	printf("isalpha\t\t= %d\n", isalpha(c));
	printf("ft_isalpha\t= %d\n", ft_isalpha(c));
	printf("----------------------------------\n");
	printf("d\t\t= %d (\\t) \n", d);
	printf("isalpha\t\t= %d\n", isalpha(d));
	printf("ft_isalpha\t= %d\n", ft_isalpha(d));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	isalpha_test(void)
{
	char a = 'a';
	char b = 'B';
	char c = '4';
	char d = '\n';

	if (file_test("ft_isalpha"))
	{
		if (isalpha(a) == ft_isalpha(a))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isalpha(b) == ft_isalpha(b))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isalpha(c) == ft_isalpha(c))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (isalpha(d) == ft_isalpha(d))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
