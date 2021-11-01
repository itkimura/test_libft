/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:43:03 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/01 17:27:09 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strlen(void)
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
}

void	test_ft_strdup(void)
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
}

void	test_ft_strcmp(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	ft_putstr("\n==========strcmp test===========\n");
	ft_putstr("strcmp\t\t= ");
	ft_putnbr(strcmp(s1, s2));
	ft_putstr("\nft_strcmp\t= ");
	ft_putnbr(ft_strcmp(s1, s2));
	s1 = "Hive";
	s2 = "Hive Helsinki";
	ft_putstr("\nstrcmp\t\t= ");
	ft_putnbr(strcmp(s1, s2));
	ft_putstr("\nft_strcmp\t= ");
	ft_putnbr(ft_strcmp(s1, s2));
	s1 = "422";
	s2 = "42";
	ft_putstr("\nstrcmp\t\t= ");
	ft_putnbr(strcmp(s1, s2));
	ft_putstr("\nft_strcmp\t= ");
	ft_putnbr(ft_strcmp(s1, s2));
	ft_putstr("\n================================\n");
}


void	test_ft_strncmp(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	ft_putstr("\n==========strncmp test==========\n");
	ft_putstr("strncmp\t\t= ");
	ft_putnbr(strncmp(s1, s2, 3));
	ft_putstr("\nft_strncmp\t= ");
	ft_putnbr(ft_strncmp(s1, s2, 3));
	s1 = "Hive";
	s2 = "Hive Helsinki";
	ft_putstr("\nstrncmp\t\t= ");
	ft_putnbr(strncmp(s1, s2, 10));
	ft_putstr("\nft_strncmp\t= ");
	ft_putnbr(ft_strncmp(s1, s2, 10));
	s1 = "422";
	s2 = "42";
	ft_putstr("\nstrncmp\t\t= ");
	ft_putnbr(strncmp(s1, s2, 3));
	ft_putstr("\nft_strncmp\t= ");
	ft_putnbr(ft_strncmp(s1, s2, 3));
	ft_putstr("\n================================\n");
}
