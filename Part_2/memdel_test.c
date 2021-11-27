/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memdel_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:21:13 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:46:41 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	memdel_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	*t1;
	char	*t2;

	t1 = (char *)malloc(sizeof(char) * strlen(s1));
	strcpy(t1, s1);
	t2 = (char *)malloc(sizeof(char) * strlen(s2));
	strcpy(t2, s2);
	print_line("ft_memdel");
	if (file_check("ft_memdel"))
	{
		printf("t1 = %s, address = %p\n", t1, t1);
		printf("t2 = %s, address = %p\n", t2, t2);
		ft_memdel((void *)&t1);
		ft_memdel((void *)&t2);
		printf("memdel >>>\n");
		printf("t1 = %s, address = %p\n", t1, t1);
		printf("t2 = %s, address = %p\n", t2, t2);
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	memdel_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	char	*t1;
	char	*t2;

	t1 = (char *)malloc(sizeof(char) * strlen(s1));
	strcpy(t1, s1);
	t2 = (char *)malloc(sizeof(char) * strlen(s2));
	strcpy(t2, s2);
	ft_memdel((void *)&t1);
	ft_memdel((void *)&t2);
	if (file_test("ft_memdel"))
	{
		if (!t1 && !t2)
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
