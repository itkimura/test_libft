/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:20:33 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/03 18:38:13 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	print_result(char *f_name, int result)
{
	if (result == 0)
	{
		ft_putstr("ft_");
		ft_putstr(f_name);
		ft_putstr(":OK!\n");
	}
	else
	{
		ft_putstr("ft_");
		ft_putstr(f_name);
		ft_putstr(":Error!\n");
	}
}

void	s_funstions(char *f_name)
{
	if (!(strcmp(f_name, "strlen")))
		strlen_check();
	if (!(strcmp(f_name, "strstr")))
		strstr_check();
	if (!(strcmp(f_name, "strcpy")))
		strcpy_check();
	if (!(strcmp(f_name, "strncpy")))
		strncpy_check();
	if (!(strcmp(f_name, "strcat")))
		strcat_check();
	if (!(strcmp(f_name, "strncat")))
		strncat_check();
	if (!(strcmp(f_name, "strnstr")))
		strnstr_check();
	if (!(strcmp(f_name, "strcmp")))
		strcmp_check();
	if (!(strcmp(f_name, "strncmp")))
		strncmp_check();
	if (!(strcmp(f_name, "strdup")))
		strdup_check();
}

void	a_funstions(char *f_name)
{
	if (!(strcmp(f_name, "atoi")))
			atoi_check();
}
 
void	test_all(void)
{
	print_result("strlen", strlen_test());
	print_result("strdup", strdup_test());
	print_result("strcpy", strcpy_test());
	print_result("strncpy", strncpy_test());
	print_result("strcat", strcat_test());
	print_result("strncat", strncat_test());
	print_result("strcmp", strcmp_test());
	print_result("strstr", strstr_test());
	print_result("strnstr", strstr_test());
	print_result("strncmp", strncmp_test());
	print_result("atoi", atoi_test());
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		ft_putstr("Please the enter function name\n");
	else
	{
		if (!(strcmp(argv[1], "all")))
			test_all();
		while (i < argc)
		{
			if (*argv[i] == 's')
				s_funstions(argv[i]);
			if (*argv[i] == 'a')
				a_funstions(argv[i]);
			i++;
		}
	}
	return (0);
}
