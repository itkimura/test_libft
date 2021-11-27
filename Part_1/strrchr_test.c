/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:09:44 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:46:31 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strrchr_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	print_line("ft_strrchr");
	if (file_check("ft_strrchr"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("c1\t\t= %c\n", c1);
		printf("strrchr\t\t= %s\n", strrchr(s1, c1));
		printf("ft_strrchr\t= %s\n", ft_strrchr(s1, c1));
		printf("s1\t\t= %s\n", s1);
		printf("c2\t\t= %c\n", c2);
		printf("strrchr\t\t= %s\n", strrchr(s1, c2));
		printf("ft_strrchr\t= %s\n", ft_strrchr(s1, c2));
		printf("s2\t\t= %s\n", s2);
		printf("c2\t\t= %c\n", c2);
		printf("strrchr\t\t= %s\n", strrchr(s2, c2));
		printf("ft_strrchr\t= %s\n", ft_strrchr(s2, c2));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	strrchr_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	if (file_test("ft_strrchr"))
	{
		if (!strcmp(strrchr(s1, c1), ft_strrchr(s1, c1)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strrchr(s1, c2) && !ft_strrchr(s1, c2))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strcmp(strrchr(s2, c2), ft_strrchr(s2, c2)))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
