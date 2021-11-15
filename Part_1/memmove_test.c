/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:00:38 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/15 15:57:30 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memmove_check(void)
{
	char	s1[20] = "Hive Helsinki";
	char	s2[] = "Hive Helsinki";
	char	s3[] = "Hello World!";
	char	s4[] = "Hello World!";

	ft_putstr("\n==========memmove test===========\n");
	ft_putstr("s1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\nmemmove\t\t= ");
	ft_putstr(memmove(&s1[5], &s1[0], 5));
	ft_putstr("\nft_memmove\t= ");
	ft_putstr(ft_memmove(&s2[5], &s2[0], 5));
	ft_putstr("\ns2\t\t= ");
	ft_putstr(s3);
	ft_putstr("\nmemmove\t\t= ");
	ft_putstr(memmove(&s3[0], &s3[6], 5));
	ft_putstr("\nft_memmove\t= ");
	ft_putstr(ft_memmove(&s4[0], &s4[6], 5));
	ft_putstr("\n================================\n");
	print_result("memmove", memmove_test());
}

int	memmove_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hive Helsinki";
	char	s3[] = "Hello World!";
	char	s4[] = "Hello World!";

	if (!strcmp(memmove(&s1[5], &s1[0], 4), ft_memmove(&s2[5], &s2[0], 4)) &&
		!strcmp(memmove(&s3[0], &s3[5], 4), ft_memmove(&s4[0], &s4[5], 4)))
		return (1);
	else
		return (0);
}
