/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:42:01 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/17 22:56:41 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strnew_check(void)
{
	char	*s1;
	char	*s2;

	s1 = 0;
	s2 = 0;
	printf("\n==========strnew test===========\n");
	printf("s1 = %s, address = %p\n", s1, s1);
	printf("s2 = %s, address = %p\n", s2, s2);
	s1 = ft_strnew(13);
	s2 = ft_strnew(12);
	s1 = strcpy(s1, "Hive Helsinki");
	s2 = strcpy(s2, "Hello World!");
	printf("strnew >>>\n");
	printf("s1 = %s, address = %p\n", s1, s1);
	printf("s2 = %s, address = %p", s2, s2);
	printf("\n==================================\n");
	print_result("strnew", strnew_test());
}

int		strnew_test(void)
{
	char	*s1;
	char	*s2;

	s1 = 0;
	s2 = 0;
	s1 = ft_strnew(13);
	s2 = ft_strnew(12);
	if (s1 && s2)
		return (1);
	else
		return (0);
}
