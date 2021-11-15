/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:14:40 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/15 14:05:33 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	bzero_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hive Helsinki";
	char	s3[] = "Hello World!";
	char	s4[] = "Hello World!";

	ft_putstr("\n==========bzero test===========\n");
	ft_putstr("s1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\nbzero\t\t= ");
	bzero(s1, 4);
	ft_putstr(s1);
	ft_putstr("\nft_bzero\t= ");
	ft_bzero(s2, 4);
	ft_putstr(s2);
	ft_putstr("\ns2\t\t= ");
	ft_putstr(s3);
	ft_putstr("\nbzero\t\t= ");
	bzero(s3, 5);
	ft_putstr(s3);
	ft_putstr("\nft_bzero\t= ");
	ft_bzero(s4, 5);
	ft_putstr(s4);
	ft_putstr("\n================================\n");
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
