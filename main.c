/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:20:33 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 22:29:58 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	print_line(char *f_name)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (f_name)
	{
		len = strlen(f_name) + 9;
		printf("\n[ %s test ]", f_name);
	}
	while (i + len < 60)
	{
		printf("=");
		i++;
	}
	printf("\n");
}


void	print_result(char *f_name, int result)
{
	printf("ft_");
	printf("%s", f_name);
	if (result)
	{
		if(strlen(f_name) < 5 )
			printf("\t\t:OK!\n");
		else
			printf("\t:OK!\n");
	}
	else
		printf("\t:Error!\n");
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
	if (!(strcmp(f_name, "memalloc")))
			memalloc_check();
	if (!(strcmp(f_name, "memdel")))
			memdel_check();
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
	if (!(strcmp(f_name, "strnew")))
		strnew_check();
}

void	test_all(void)
{
	printf("Part 1 - Libc functions\n");
	memset_test();
	bzero_test();
	memcpy_test();
	memccpy_test();
	memmove_test();
	memchr_test();
	memcmp_test();
	strlen_test();
	strdup_test();
	strcpy_test();
	strncpy_test();
	strcat_test();
	strncat_test();
	strlcat_test();
	strchr_test();
	strrchr_test();
	strstr_test();
	strnstr_test();
	strcmp_test();
	strncmp_test();
	atoi_test();
	isalpha_test();
	isdigit_test();
	isalnum_test();
	isascii_test();
	isprint_test();
	toupper_test();
	tolower_test();
	printf("\nPart 2 - Additional functions\n");
	memalloc_test();
	memdel_test();
	strnew_test();
}

void	t_funstions(char *f_name)
{
	if (!(strcmp(f_name, "toupper")))
			toupper_check();
	if (!(strcmp(f_name, "tolower")))
			tolower_check();
}

void	check_all(void)
{
	memset_check();
	bzero_check();
	memcpy_check();
	memccpy_check();
	memmove_check();
	memchr_check();
	memcmp_check();
	strlen_check();
	strdup_check();
	strcpy_check();
	strncpy_check();
	strcat_check();
	strncat_check();
	strlcat_check();
	strchr_check();
	strrchr_check();
	strstr_check();
	strnstr_check();
	strcmp_check();
	strncmp_check();
	atoi_check();
	isalpha_check();
	isdigit_check();
	isalnum_check();
	isascii_check();
	isprint_check();
	toupper_check();
	tolower_check();
	memalloc_check();
	memdel_check();
	strnew_check();
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		printf("\n[ Commands ]================================================\n");
		printf("./test submit\t\t= Check the submission\n");
		printf("./test all\t\t= Test all functions\n");
		printf("./test [function name]\t= Test a function and display output\n");
		printf("./test checkall\t= Test all function and display output\n");
		print_line(0);
	}
	else
	{
		if (!(strcmp(argv[1], "all")))
			test_all();
		if (!(strcmp(argv[1], "submit")))
			submit_file();
		if (!(strcmp(argv[1], "checkall")))
			check_all();
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
