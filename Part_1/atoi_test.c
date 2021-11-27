/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:21:40 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 23:05:40 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	atoi_check(void)
{
	char	*s1;

	s1 = "    123456";
	print_line("ft_atoi");
	if (file_check("ft_atoi"))
	{
		printf("----------------------------------\n");
		printf("s1\t\t= %s\n", s1);
		printf("atoi\t\t= %d\n", atoi(s1));
		printf("ft_atoi\t\t= %d\n", ft_atoi(s1));
		printf("----------------------------------\n");
		s1 = "    -123456";
		printf("s1\t\t= %s\n", s1);
		printf("atoi\t\t= %d\n", atoi(s1));
		printf("ft_atoi\t\t= %d\n", ft_atoi(s1));
		printf("----------------------------------\n");
		s1 = "    +123456";
		printf("s1\t\t= %s\n", s1);
		printf("atoi\t\t= %d\n", atoi(s1));
		printf("ft_atoi\t\t= %d\n", ft_atoi(s1));
		printf("----------------------------------\n");
		s1 = "    -123 456";
		printf("s1\t\t= %s\n", s1);
		printf("atoi\t\t= %d\n", atoi(s1));
		printf("ft_atoi\t\t= %d\n", ft_atoi(s1));
		printf("----------------------------------\n");
		s1 = "    -Hive123 456";
		printf("s1\t\t= %s\n", s1);
		printf("atoi\t\t= %d\n", atoi(s1));
		printf("ft_atoi\t\t= %d\n", ft_atoi(s1));
		printf("----------------------------------\n");
		s1 = "    2147483648";
		printf("s1\t\t= %s\n", s1);
		printf("atoi\t\t= %d\n", atoi(s1));
		printf("ft_atoi\t\t= %d\n", ft_atoi(s1));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	atoi_test(void)
{
	char s1[] = "    123456";
	char s2[] = "    -123456";
	char s3[] = "    +123456";
	char s4[] = "    -123 456";
	char s5[] = "    -Hive123 456";
	char s6[] = "    2147483648";

	if (file_test("ft_atoi"))
	{
		if (atoi(s1) == ft_atoi(s1))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (atoi(s2) == ft_atoi(s2))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (atoi(s3) == ft_atoi(s3))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (atoi(s4) == ft_atoi(s4))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (atoi(s5) == ft_atoi(s5))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (atoi(s6) == ft_atoi(s6))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
