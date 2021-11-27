/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:29:18 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:45:53 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	strchr_check(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	print_line("ft_strchr");
	if (file_check("ft_strchr"))
	{
		printf("s1\t\t= %s\n", s1);
		printf("c1\t\t= %c\n", c1);
		printf("strchr\t\t= %s\n", strchr(s1, c1));
		printf("ft_strchr\t= %s\n", ft_strchr(s1, c1));
		printf("s1\t\t= %s\n", s1);
		printf("c2\t\t= %c\n", c2);
		printf("strchr\t\t= %s\n", strchr(s1, c2));
		printf("ft_strchr\t= %s\n", ft_strchr(s1, c2));
		printf("s2\t\t= %s\n",s2);
		printf("c2\t\t= %c\n", c2);
		printf("strchr\t\t= %s\n", strchr(s2, c2));
		printf("ft_strchr\t= %s\n", ft_strchr(s2, c2));
	}
	else
		printf("\x1b[33mFail\033[m\n");
	print_line(0);
}

void	strchr_test(void)
{
	char	s1[] = "Hive Helsinki";
	char	s2[] = "Hello World!";
	int		c1 = 72; /* H */
	int		c2 = 111; /* o */

	if (file_test("ft_strchr"))
	{
		if (!strcmp(strchr(s1, c1), ft_strchr(s1, c1)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if ((!strchr(s1, c2) && !ft_strchr(s1, c2)))
			printf("\x1b[36mOK\033[m ");
		else
			printf("\x1b[33mKO\033[m ");
		if (!strcmp(strchr(s2, c2), ft_strchr(s2, c2)))
			printf("\x1b[36mOK\033[m\n");
		else
			printf("\x1b[33mKO\033[m\n");
	}
	else
		printf("\x1b[33mFail\033[m\n");
}
