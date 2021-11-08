/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:14:07 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/08 15:09:14 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strlen_check(void)
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
	print_result("strlen", strlen_test());
}

int		strlen_test(void)
{
	const char *s1 = "Hive Helsinki";
	const char *s2 = "Hello World!";
	if(strlen(s1) == ft_strlen(s1) && strlen(s2) == ft_strlen(s2))
		return (1);
	else
		return (0);
}
