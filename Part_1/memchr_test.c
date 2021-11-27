/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:25:21 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:36:40 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memchr_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	print_line("ft_memchr");
	if (file_check("ft_memchr"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("c1\t\t= %c\n", c1);
		printf("memchr\t\t= %s\n", (char *)memchr(s1, c1, 10));
		printf("ft_memchr\t= %s\n", (char *)ft_memchr(s1, c1, 10));
		printf("s1\t\t= %s\n",s1);
		printf("c2\t\t= %c\n", c2);
		printf("memchr\t\t= %s\n", (char *)memchr(s1, c2, 10));
		printf("ft_memchr\t= %s\n", (char *)ft_memchr(s1, c2, 10));
		printf("s2\t\t= %s\n", s2);
		printf("c2\t\t= %c\n", c2);
		printf("memchr\t\t= %s\n", (char *)memchr(s2, c2, 10));
		printf("ft_memchr\t= %s\n", (char *)ft_memchr(s2, c2, 10));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	memchr_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	if (file_test("ft_memchr"))
	{
		if (!strcmp(memchr(s1, c1, 10), ft_memchr(s1, c1, 10)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!memchr(s1, c2, 10) && !ft_memchr(s1, c2, 10))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strcmp(memchr(s2, c2, 10), ft_memchr(s2, c2, 10)))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
