/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:16:54 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:15:08 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memset_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	s3[] = "GeeksForGeeks is for programming geeks.";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */
	int		c3 = 45; /*-*/

	print_line("ft_memset");
	if (file_check("ft_strnstr"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("c1\t\t= %c\n", c1);
		printf("memset\t\t= %s\n", (char *)memset(s1, c1, 4));
		printf("ft_memset\t= %s\n", (char *)ft_memset(s1, c1, 4));
		printf("s2\t\t= %s\n", s2);
		printf("c2\t\t= %c\n", c2);
		printf("memset\t\t= %s\n", (char *)memset(s2, c2, 5));
		printf("ft_memset\t= %s\n", (char *)ft_memset(s2, c2, 5));
		printf("s3\t\t= %s\n", s3);
		printf("c3\t\t= %c\n", c3);
		printf("memset\t\t= %s\n", (char *)memset(s3, c3, 5));
		printf("ft_memset\t= %s\n", (char *)ft_memset(s3, c3, 5));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	memset_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	s3[] = "GeeksForGeeks is for programming geeks.";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */
	int		c3 = 45; /*-*/

	if (file_test("ft_memset"))
	{
		if (!strcmp(memset(s1, c1, 4), ft_memset(s1, c1, 4)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strcmp(memset(s2, c2, 5), ft_memset(s2, c2, 5)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strcmp(memset(s3, c3, 5), ft_memset(s3, c3, 5)))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
