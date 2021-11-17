/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:25:46 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/17 22:54:55 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memalloc_check(void)
{
	char	*s1;
	char	*s2;

	s1 = 0;
	s2 = 0;
	printf("\n==========memalloc test===========\n");
	printf("s1 = %s, address = %p\n", s1, s1);
	s1 = ft_memalloc(5);
	printf("memalloc = %s, address = %p\n", s1, s1);
	printf("s2 = %s, address = %p\n", s2, s2);
	s2 = ft_memalloc(5);
	printf("memalloc = %s, address = %p", s2, s2);
	printf("\n==================================\n");
	print_result("memalloc", memalloc_test());
}

int		memalloc_test(void)
{
	char	*s1;
	char	*s2;

	s1 = 0;
	s2 = 0;
	s1 = ft_memalloc(5);
	s2 = ft_memalloc(5);
	if (s1 && s2)
		return (1);
	else
		return (0);
}
