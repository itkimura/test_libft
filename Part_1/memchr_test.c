/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:25:21 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/15 16:27:03 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memchr_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	ft_putstr("\n==========memchr test===========\n");
	ft_putstr("s1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\nc1\t\t= ");
	ft_putchar(c1);
	ft_putstr("\nmemchr\t\t= ");
	ft_putstr(memchr(s1, c1, 10));
	ft_putstr("\nft_memchr\t= ");
	ft_putstr(ft_memchr(s1, c1, 10));
	ft_putstr("\ns1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\nc2\t\t= ");
	ft_putchar(c2);
	ft_putstr("\nmemchr\t\t= ");
	if (!memchr(s1, c2, 10))
		ft_putstr("0");
	ft_putstr("\nft_memchr\t= ");
	if (!ft_memchr(s1, c2, 10))
		ft_putstr("0");
	ft_putstr("\ns2\t\t= ");
	ft_putstr(s2);
	ft_putstr("\nc2\t\t= ");
	ft_putchar(c2);
	ft_putstr("\nmemchr\t\t= ");
	ft_putstr(memchr(s2, c2, 10));
	ft_putstr("\nft_memchr\t= ");
	ft_putstr(ft_memchr(s2, c2, 10));
	ft_putstr("\n================================\n");
	print_result("memchr", memchr_test());
}

int	memchr_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	if (!strcmp(memchr(s1, c1, 10), ft_memchr(s1, c1, 10)) &&
		(!memchr(s1, c2, 10) && !ft_memchr(s1, c2, 10)) &&
		!strcmp(memchr(s2, c2, 10), ft_memchr(s2, c2, 10)))
		return (1);
	else
		return (0);
}
