/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:20:33 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/15 16:37:05 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	print_result(char *f_name, int result)
{
	ft_putstr("ft_");
	ft_putstr(f_name);
	if (result)
	{
		if(strlen(f_name) < 5 )
			ft_putstr("\t\t:OK!\n");
		else
			ft_putstr("\t:OK!\n");
	}
	else
	{
		ft_putstr("ft_");
		ft_putstr(f_name);
		ft_putstr("\t:Error!\n");
	}
}

void	a_b_funstions(char *f_name)
{
	if (!(strcmp(f_name, "atoi")))
			atoi_check();
	if (!(strcmp(f_name, "bzero")))
			bzero_check();
}

void	i_funstions(char *f_name)
{
	if (!(strcmp(f_name, "isalpha")))
			isalpha_check();
	if (!(strcmp(f_name, "isdigit")))
			isdigit_check();
	if (!(strcmp(f_name, "isalnum")))
			isalnum_check();
	if (!(strcmp(f_name, "isascii")))
			isascii_check();
	if (!(strcmp(f_name, "isprint")))
			isprint_check();
}

void	m_funstions(char *f_name)
{
	if (!(strcmp(f_name, "memset")))
			memset_check();
	if (!(strcmp(f_name, "memcpy")))
			memcpy_check();
	if (!(strcmp(f_name, "memccpy")))
			memccpy_check();
	if (!(strcmp(f_name, "memmove")))
			memmove_check();
	if (!(strcmp(f_name, "memchr")))
			memchr_check();
	if (!(strcmp(f_name, "memcmp")))
			memcmp_check();
}

void	s_funstions(char *f_name)
{
	if (!(strcmp(f_name, "strlen")))
		strlen_check();
	if (!(strcmp(f_name, "strdup")))
		strdup_check();
	if (!(strcmp(f_name, "strcpy")))
		strcpy_check();
	if (!(strcmp(f_name, "strncpy")))
		strncpy_check();
	if (!(strcmp(f_name, "strcat")))
		strcat_check();
	if (!(strcmp(f_name, "strncat")))
		strncat_check();
	if (!(strcmp(f_name, "strlcat")))
		strlcat_check();
	if (!(strcmp(f_name, "strchr")))
		strchr_check();
	if (!(strcmp(f_name, "strrchr")))
		strrchr_check();
	if (!(strcmp(f_name, "strstr")))
		strstr_check();
	if (!(strcmp(f_name, "strnstr")))
		strnstr_check();
	if (!(strcmp(f_name, "strcmp")))
		strcmp_check();
	if (!(strcmp(f_name, "strncmp")))
		strncmp_check();
}

void	test_all(void)
{
	print_result("memset", memset_test());
	print_result("bzero", bzero_test());
	print_result("memcpy", memcpy_test());
	print_result("memccpy", memcpy_test());
	print_result("memmove", memmove_test());
	print_result("memchr", memmove_test());
	print_result("memcmp", memmove_test());
	print_result("strlen", strlen_test());
	print_result("strdup", strdup_test());
	print_result("strcpy", strcpy_test());
	print_result("strncpy", strncpy_test());
	print_result("strcat", strcat_test());
	print_result("strncat", strncat_test());
	print_result("strlcat", strlcat_test());
	print_result("strchr", strchr_test());
	print_result("strrchr", strrchr_test());
	print_result("strstr", strstr_test());
	print_result("strnstr", strstr_test());
	print_result("strcmp", strcmp_test());
	print_result("strncmp", strncmp_test());
	print_result("atoi", atoi_test());
	print_result("isalpha", isalpha_test());
	print_result("isdigit", isdigit_test());
	print_result("isalnum", isdigit_test());
	print_result("isascii", isdigit_test());
	print_result("isprint", isdigit_test());
	print_result("toupper", isdigit_test());
	print_result("tolower", isdigit_test());
}

void	t_funstions(char *f_name)
{
	if (!(strcmp(f_name, "toupper")))
			toupper_check();
	if (!(strcmp(f_name, "tolower")))
			tolower_check();
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
			if (*argv[i] == 'a' || *argv[i] == 'b')
				a_b_funstions(argv[i]);
			if (*argv[i] == 'i')
				i_funstions(argv[i]);
			if (*argv[i] == 'm')
				m_funstions(argv[i]);
			if (*argv[i] == 's')
				s_funstions(argv[i]);
			if (*argv[i] == 't')
				t_funstions(argv[i]);
			i++;
		}
	}
	return (0);
}
