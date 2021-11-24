/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:14:40 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/24 14:37:07 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	bzero_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hive Helsinki";
	char	s3[] = "Hello World!";
	char	s4[] = "Hello World!";

	print_line("bzero");
	printf("s1\t\t= %s\n", s1);
	printf("bzero\t\t= %s\tlen = %lu\n", bzero(s1, 4), strlen(s1));
	ft_bzero(s2, 4);
	printf("ft_bzero\t= %s\tlen = %lu\n", s2, strlen(s1));
	printf("s2\t\t= %s\n", s2);
	printf("bzero\t\t= %s\tlen = %lu\n", bzero(s3, 5), strlen(s3));
	ft_bzero(s4, 5);
	printf("ft_bzero\t= %s\tlen = %lu\n", s4, strlen(s4));
	print_line(0);
	print_result("bzero", bzero_test());
}

int	bzero_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hive Helsinki";
	char	s3[] = "Hello World!";
	char	s4[] = "Hello World!";

	bzero(s1, 4);
	ft_bzero(s2, 4);
	bzero(s3, 5);
	ft_bzero(s4, 5);
	if (!strcmp(s1, s2) &&
		!strcmp(s3, s4))
		return (1);
	else
		return (0);
}
