/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:37:39 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/15 17:04:52 by itkimura         ###   ########.fr       */
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

	ft_putstr("\n==========memccpy test===========\n");
	ft_putstr("s1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\ns2\t\t= ");
	ft_putstr(s2);
	ft_putstr("\nc1\t\t= ");
	ft_putchar((char)c1);
	ft_putstr("\nmemccpy\t\t= ");
	ft_putstr(memccpy(s1, s2, c1, 4));
	ft_putstr("\nft_memccpy\t= ");
	ft_putstr(ft_memccpy(s3, s4, c1, 4));
	ft_putstr("\ns5\t\t= ");
	ft_putstr(s5);
	ft_putstr("\ns6\t\t= ");
	ft_putstr(s6);
	ft_putstr("\nc2\t\t= ");
	ft_putchar((char)c2);
	ft_putstr("\nmemccpy\t\t= ");
	ft_putstr(memccpy(s5, s6, c2, 5));
	ft_putstr("\nft_memccpy\t= ");
	ft_putstr(ft_memccpy(s7, s8, c2, 5));
	ft_putstr("\n================================\n");
	print_result("memccpy", memccpy_test());
}

int	memccpy_test(void)
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

	if (!strcmp(memccpy(s1, s2, c1, 4), ft_memccpy(s3, s4, c1, 4)) &&
		!strcmp(memccpy(s5, s6, c2, 5), ft_memccpy(s7, s8, c2, 5)))
		return (1);
	else
		return (0);
}
