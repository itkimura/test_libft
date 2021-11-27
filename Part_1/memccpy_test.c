/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:37:39 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:33:56 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memccpy_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	s3[] = "Hive Helsinki";
	char	s4[] = "Hello World!";
	char	s5[] = "Apple";
	char	s6[] = "Orange";
	char	s7[] = "Apple";
	char	s8[] = "Orange";
	int		c1 = 72; /* H */
	int		c2 = 79; /* O */

	print_line("ft_memccpy");
	if (file_check("ft_memccpy"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("s2\t\t= %s\n", s2);
		printf("c1\t\t= %c\n", (char)c1);
		printf("memccpy\t\t= %s\n", (char *)memccpy(s1, s2, c1, 4));
		printf("ft_memccpy\t= %s\n", (char *)ft_memccpy(s3, s4, c1, 4));
		printf("s5\t\t= %s\n", s5);
		printf("s6\t\t= %s\n", s6);
		printf("c2\t\t= %c\n", (char)c2);
		printf("memccpy\t\t= %s\n", (char *)memccpy(s5, s6, c2, 5));
		printf("ft_memccpy\t= %s\n", (char *)ft_memccpy(s7, s8, c2, 5));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	memccpy_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	s3[] = "Hive Helsinki";
	char	s4[] = "Hello World!";
	char	s5[] = "Apple";
	char	s6[] = "Orange";
	char	s7[] = "Apple";
	char	s8[] = "Orange";
	int		c1 = 72; /* H */
	int		c2 = 79; /* O */

	if (file_test("ft_memccpy"))
	{
		if (!strcmp(memccpy(s1, s2, c1, 4), ft_memccpy(s3, s4, c1, 4)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
	
		if	(!strcmp(memccpy(s5, s6, c2, 5), ft_memccpy(s7, s8, c2, 5)))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
