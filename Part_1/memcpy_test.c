/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcopy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:57:48 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/15 12:09:59 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memcpy_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	*s3 = NULL;
	char	*s4 = NULL;

	ft_putstr("\n==========memcpy test===========\n");
	ft_putstr("s1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\ns2\t\t= ");
	ft_putstr(s2);
	ft_putstr("\nmemcpy\t\t= ");
	ft_putstr(memcpy(s1, s2, 4));
	ft_putstr("\nft_memcpy\t= ");
	ft_putstr(ft_memcpy(s1, s2, 4));
	ft_putstr("\ns3\t\t= ");
	if (s3 == 0)
		ft_putstr("null");
	ft_putstr("\ns4\t\t= ");
	if (s4 == 0)
		ft_putstr("null");
	ft_putstr("\nmemcpy\t\t= ");
	if (memcpy(s3, s4, 5) == 0)
		ft_putstr("null");
	ft_putstr("\nft_memcpy\t= ");
	if (ft_memcpy(s3, s4, 5) == 0)
		ft_putstr("null");
	ft_putstr("\n================================\n");
	print_result("memcpy", memcpy_test());
}

int	memcpy_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	*s3 = NULL;
	char	*s4 = NULL;

	if (!strcmp(memcpy(s1, s2, 4), ft_memcpy(s1, s2, 4)) &&
		(memcpy(s3, s4, 5) == 0 && ft_memcpy(s3, s4, 5) == 0))
		return (1);
	else
		return (0);
}
