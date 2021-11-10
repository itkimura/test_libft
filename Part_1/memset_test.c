/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:16:54 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/10 16:45:27 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memset_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	ft_putstr("\n==========memset test===========\n");
	ft_putstr("s1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\nc1\t\t= ");
	ft_putchar(c1);
	ft_putstr("\nmemset\t\t= ");
	ft_putstr(memset(s1, c1, 4));
	ft_putstr("\nft_memset\t= ");
	ft_putstr(ft_memset(s1, c1, 4));
	ft_putstr("\ns2\t\t= ");
	ft_putstr(s2);
	ft_putstr("\nc2\t\t= ");
	ft_putchar(c2);
	ft_putstr("\nmemset\t\t= ");
	ft_putstr(memset(s2, c2, 5));
	ft_putstr("\nft_memset\t= ");
	ft_putstr(ft_memset(s2, c2, 5));
	ft_putstr("\n================================\n");
	print_result("memset", memset_test());
}

int	memset_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	if (!strcmp(memset(s1, c1, 4), ft_memset(s1, c1, 4)) &&
		!strcmp(memset(s2, c2, 5), ft_memset(s2, c2, 5)))
		return (1);
	else
		return (0);
}
