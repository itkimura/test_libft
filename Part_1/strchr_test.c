/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchar_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:29:18 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/10 16:53:37 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strchr_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	ft_putstr("\n==========strchr test===========\n");
	ft_putstr("s1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\nc1\t\t= ");
	ft_putchar(c1);
	ft_putstr("\nstrchr\t\t= ");
	ft_putstr(strchr(s1, c1));
	ft_putstr("\nft_strchr\t= ");
	ft_putstr(ft_strchr(s1, c1));
	ft_putstr("\ns1\t\t= ");
	ft_putstr(s1);
	ft_putstr("\nc2\t\t= ");
	ft_putchar(c2);
	ft_putstr("\nstrchr\t\t= ");
	if (!strchr(s1, c2))
		ft_putstr("0");
	ft_putstr("\nft_strchr\t= ");
	if (!ft_strchr(s1, c2))
		ft_putstr("0");
	ft_putstr("\ns2\t\t= ");
	ft_putstr(s2);
	ft_putstr("\nc2\t\t= ");
	ft_putchar(c2);
	ft_putstr("\nstrchr\t\t= ");
	ft_putstr(strchr(s2, c2));
	ft_putstr("\nft_strchr\t= ");
	ft_putstr(ft_strchr(s2, c2));
	ft_putstr("\n================================\n");
	print_result("strchr", strchr_test());
}

int	strchr_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	if (!strcmp(strchr(s1, c1), ft_strchr(s1, c1)) &&
		(!strchr(s1, c2) && !ft_strchr(s1, c2)) &&
		!strcmp(strchr(s2, c2), ft_strchr(s2, c2)))
		return (1);
	else
		return (0);
}
