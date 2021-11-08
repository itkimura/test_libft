/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:09:44 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 15:12:45 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strrchr_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	ft_putstr("\n==========strrchr test===========\n");
	ft_putstr("s1 = ");
	ft_putstr(s1);
	ft_putstr("\nc1 = ");
	ft_putchar(c1);
	ft_putstr("\nstrrchr = ");
	ft_putstr(strrchr(s1, c1));
	ft_putstr("\nft_strrchr = ");
	ft_putstr(ft_strrchr(s1, c1));
	ft_putstr("\ns1 = ");
	ft_putstr(s1);
	ft_putstr("\nc2 = ");
	ft_putchar(c2);
	ft_putstr("\nstrrchr = ");
	if (!strrchr(s1, c2))
		ft_putstr("0");
	ft_putstr("\nft_strrchr = ");
	if (!ft_strrchr(s1, c2))
		ft_putstr("0");
	ft_putstr("\ns2 = ");
	ft_putstr(s2);
	ft_putstr("\nc2 = ");
	ft_putchar(c2);
	ft_putstr("\nstrrchr = ");
	ft_putstr(strrchr(s2, c2));
	ft_putstr("\nft_strrchr = ");
	ft_putstr(ft_strrchr(s2, c2));
	ft_putstr("\n================================\n");
	print_result("strrchr", strrchr_test());
}

int	strrchr_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	if (!strcmp(strrchr(s1, c1), ft_strrchr(s1, c1)) &&
		(!strrchr(s1, c2) && !ft_strrchr(s1, c2)) &&
		!strcmp(strrchr(s2, c2), ft_strrchr(s2, c2)))
		return (1);
	else
		return (0);
}