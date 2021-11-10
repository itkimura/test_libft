/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:29:44 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/10 16:57:15 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strnstr_check(void)
{
	const char	s1[] = "Hive Helsinki";
	const char	s2[] = "Hive";
	const char	s3[] = "Hello World!";

	ft_putstr("\n==========strnstr test===========\n");
	ft_putstr("strnstr\t\t= ");
	ft_putstr(strnstr(s1, s2, 4));
	ft_putstr("\nft_strnstr\t= ");
	ft_putstr(ft_strnstr(s1, s2, 4));
	ft_putstr("\nstrnstr\t\t= ");
	if (!strnstr(s3, s2, 10))
		ft_putstr("(null)");
	ft_putstr("\nft_strnstr\t= ");
	if (!ft_strnstr(s3, s2, 10))
		ft_putstr("(null)");
	ft_putstr("\n================================\n");
	print_result("strnstr", strnstr_test());
}

int		strnstr_test(void)
{
	const char	s1[] = "Hive Helsinki";
	const char	s2[] = "Hive";
	const char	s3[] = "Hello World!";

	if (!(strcmp(strnstr(s1, s2, 4), ft_strnstr(s1, s2, 4))) &&
		!strnstr(s3, s2, 2) && !ft_strnstr(s3, s2, 2))
		return (1);
	else
		return (0);
}
