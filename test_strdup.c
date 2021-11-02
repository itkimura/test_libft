/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:21:01 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/02 18:25:27 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	check_strdup(void)
{
	const char *s1 = "Hive Helsinki";
	const char *s2 = "Hello World!";

	ft_putstr("\n==========strdup test===========\n");
	ft_putstr("strdup\t\t= ");
	ft_putstr(strdup(s1));
	ft_putstr("\nft_strdup\t= ");
	ft_putstr(ft_strdup(s1));
	ft_putstr("\nstrdup\t\t= ");
	ft_putstr(strdup(s2));
	ft_putstr("\nft_strdup\t= ");
	ft_putstr(ft_strdup(s2));
	ft_putstr("\n================================\n");
	print_result("strdup", test_strdup());
}

int	test_strdup(void)
{
	const char *s1 = "Hive Helsinki";
	const char *s2 = "Hello World!";

	if(!(strcmp(strdup(s1), ft_strdup(s1))) && !(strcmp(strdup(s2), ft_strdup(s2))))
		return (0);
	else
		return (1);
}
