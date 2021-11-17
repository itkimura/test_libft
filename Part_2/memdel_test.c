/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memdel_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:21:13 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/17 22:54:18 by itkimura         ###   ########.fr       */
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
	printf("\n==========memdel test===========\n");
	printf("t1 = %s, address = %p\n", t1, t1);
	printf("t2 = %s, address = %p\n", t2, t2);
	ft_memdel((void *)&t1);
	ft_memdel((void *)&t2);
	printf("memdel >>>\n");
	printf("t1 = %s, address = %p\n", t1, t1);
	printf("t2 = %s, address = %p", t2, t2);
	printf("\n==================================\n");
	print_result("memdel", memdel_test());
}

int		memdel_test(void)
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
	if (!t1 && !t2)
		return (1);
	else
		return (0);
}
