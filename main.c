/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:20:33 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/01 17:33:36 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	s(char *f_name)
{
	if (!(ft_strcmp(f_name, "strlen")))
		test_ft_strlen();
	if (!(ft_strcmp(f_name, "strcmp")))
		test_ft_strcmp();
	if (!(ft_strcmp(f_name, "strncmp")))
		test_ft_strncmp();
	if (!(ft_strcmp(f_name, "strdup")))
		test_ft_strdup();
}

void	a(char *f_name)
{
	if (!(ft_strcmp(f_name, "atoi")))
			test_ft_atoi();
}
 
void	test_all(void)
{
	test_ft_strlen();
	test_ft_strdup();
	test_ft_strcmp();
	test_ft_strncmp();
	test_ft_atoi();
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
				s(argv[i]);
			if (*argv[i] == 'a')
				a(argv[i]);
			i++;
		}
	}
	return (0);
}
