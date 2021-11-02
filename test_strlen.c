/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:14:07 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/02 17:16:37 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	check_strlen(void)
{
	const char *s1 = "Hive Helsinki";
	const char *s2 = "Hello World!";

	ft_putstr("\n==========strlen test===========\n");
	ft_putstr("strlen\t\t= ");
	ft_putnbr(strlen(s1));
	ft_putstr("\nft_strlen\t= ");
	ft_putnbr(ft_strlen(s1));
	ft_putstr("\nstrlen\t\t= ");
	ft_putnbr(strlen(s2));
	ft_putstr("\nft_strlen\t= ");
	ft_putnbr(ft_strlen(s2));
	ft_putstr("\n================================\n");
	print_result("strlen", test_strlen());
}

int		test_strlen(void)
{
	const char *s1 = "Hive Helsinki";
	const char *s2 = "Hello World!";
	if(strlen(s1) == ft_strlen(s1) && strlen(s2) == ft_strlen(s2))
		return (0);
	else
		return (1);
}
