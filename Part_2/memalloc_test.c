/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:25:46 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:47:01 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memalloc_check(void)
{
	char	*s1;
	char	*s2;

	s1 = 0;
	s2 = 0;
	print_line("ft_memalloc");
	if (file_check("ft_memalloc"))
	{
		printf("s1 = %s, address = %p\n", s1, s1);
		s1 = ft_memalloc(5);
		printf("memalloc = %s, address = %p\n", s1, s1);
		printf("s2 = %s, address = %p\n", s2, s2);
		s2 = ft_memalloc(5);
		printf("memalloc = %s, address = %p\n", s2, s2);
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	memalloc_test(void)
{
	char	*s1;
	char	*s2;

	s1 = 0;
	s2 = 0;
	s1 = ft_memalloc(5);
	s2 = ft_memalloc(5);
	if (file_test("ft_memalloc"))
	{
		if (s1 && s2)
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
