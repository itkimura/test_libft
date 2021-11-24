/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:16:54 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/24 13:59:21 by itkimura         ###   ########.fr       */
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

	print_line("memset");
	printf("s1\t\t= %s\n", s1);
	printf("c1\t\t= %c\n", c1);
	printf("memset\t\t= %s\n", memset(s1, c1, 4));
	printf("ft_memset\t= %s\n", ft_memset(s1, c1, 4));
	printf("s2\t\t= %s\n", s2);
	printf("c2\t\t= %c\n", c2);
	printf("memset\t\t= %s\n", memset(s2, c2, 5));
	printf("ft_memset\t= %s\n", ft_memset(s2, c2, 5));
	printf("s3\t\t= %s\n", s3);
	printf("c3\t\t= %c\n", c3);
	printf("memset\t\t= %s\n", memset(s3, c3, 5));
	printf("ft_memset\t= %s\n", ft_memset(s3, c3, 5));
	print_line(0);
	print_result("memset", memset_test());
}

int	memset_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	s3[] = "GeeksForGeeks is for programming geeks.";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */
	int		c3 = 45; /*-*/

	if (!strcmp(memset(s1, c1, 4), ft_memset(s1, c1, 4)) &&
		!strcmp(memset(s2, c2, 5), ft_memset(s2, c2, 5)) &&
		!strcmp(memset(s3, c3, 5), ft_memset(s3, c3, 5)))
		return (1);
	else
		return (0);
}
