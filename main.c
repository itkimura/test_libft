/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:20:33 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/02 18:05:53 by itkimura         ###   ########.fr       */
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
	if (!(ft_strcmp(f_name, "strlen")))
		check_strlen();
	if (!(ft_strcmp(f_name, "strcmp")))
		check_strcmp();
	if (!(ft_strcmp(f_name, "strncmp")))
		check_strncmp();
	if (!(ft_strcmp(f_name, "strdup")))
		check_strdup();
	if (!(ft_strcmp(f_name, "strcpy")))
		check_strcpy();
}

void	a_funstions(char *f_name)
{
	if (!(ft_strcmp(f_name, "atoi")))
			check_atoi();
}
 
void	test_all(void)
{
	print_result("strlen", test_strlen());
	print_result("strdup", test_strdup());
	print_result("strcpy", test_strcpy());
	print_result("strdup", test_strcmp());
	print_result("strncmp", test_strncmp());
	print_result("atoi", test_atoi());
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
