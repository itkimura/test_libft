/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:29:44 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/09 11:13:38 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strstr_check(void)
{
	const char	s1[] = "Hive Helsinki";
	const char	s2[] = "Hive";
	const char	s3[] = "Hello World!";

	ft_putstr("\n==========strstr test===========\n");
	ft_putstr("s1 = ");
	ft_putstr((char *)s1);
	ft_putstr("\ns2 = ");
	ft_putstr((char *)s2);
	ft_putstr("\nstrstr = ");
	ft_putstr(strstr(s1, s2));
	ft_putstr("\nft_strstr = ");
	ft_putstr(ft_strstr(s1, s2));
	ft_putstr("\ns3 = ");
	ft_putstr((char *)s3);
	ft_putstr("\ns2 = ");
	ft_putstr((char *)s2);
	ft_putstr("\nstrstr = ");
	if (!strstr(s3, s2))
		ft_putstr("(null)");
	ft_putstr("\nft_strstr = ");
	if (!ft_strstr(s3, s2))
		ft_putstr("(null)");
	ft_putstr("\n================================\n");
	print_result("strstr", strstr_test());
}

int		strstr_test(void)
{
	const char	s1[] = "Hive Helsinki";
	const char	s2[] = "Hive";
	const char	s3[] = "Hello World!";

	if (!(strcmp(strstr(s1, s2), ft_strstr(s1, s2))) &&
		!strstr(s3, s2) && !ft_strstr(s3, s2))
		return (1);
	else
		return (0);
}
