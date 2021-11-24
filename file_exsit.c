/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_exsit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:01:21 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/24 14:57:20 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	file_exsit(char *f_name, int *n)
{
	int	fd;

	ft_putstr(f_name + 9);
	fd = open(f_name, O_RDONLY);
	if (fd != -1)
	{
		close(fd);
		ft_putstr("\t:Submitted\n");
		*n = *n + 1;
	}
	else
	{
		ft_putstr("\t:No file\n");
	}
}

void	submit_file(void)
{
	int	part1;
	int	part2;
	int	bonus;

	part1 = 0;
	part2 = 0;
	bonus = 0;
	print_line("Part 1 - Libc functions");
	file_exsit("../libft/ft_memset.c", &part1);
	file_exsit("../libft/ft_bzero.c", &part1);
	file_exsit("../libft/ft_memcpy.c", &part1);
	file_exsit("../libft/ft_memccpy.c", &part1);
	file_exsit("../libft/ft_memmove.c", &part1);
	file_exsit("../libft/ft_memchr.c", &part1);
	file_exsit("../libft/ft_memcmp.c", &part1);
	file_exsit("../libft/ft_strlen.c", &part1);
	file_exsit("../libft/ft_strdup.c", &part1);
	file_exsit("../libft/ft_strcpy.c", &part1);
	file_exsit("../libft/ft_strncpy.c", &part1);
	file_exsit("../libft/ft_strcat.c", &part1);
	file_exsit("../libft/ft_strncat.c", &part1);
	file_exsit("../libft/ft_strlcat.c", &part1);
	file_exsit("../libft/ft_strchr.c", &part1);
	file_exsit("../libft/ft_strrchr.c", &part1);
	file_exsit("../libft/ft_strstr.c", &part1);
	file_exsit("../libft/ft_strnstr.c", &part1);
	file_exsit("../libft/ft_strcmp.c", &part1);
	file_exsit("../libft/ft_strncmp.c", &part1);
	file_exsit("../libft/ft_atoi.c", &part1);
	file_exsit("../libft/ft_isalpha.c", &part1);
	file_exsit("../libft/ft_isdigit.c", &part1);
	file_exsit("../libft/ft_isalnum.c", &part1);
	file_exsit("../libft/ft_isascii.c", &part1);
	file_exsit("../libft/ft_isprint.c", &part1);
	file_exsit("../libft/ft_toupper.c", &part1);
	file_exsit("../libft/ft_tolower.c", &part1);
	print_line("Part 2 - Additional functions");
	file_exsit("../libft/ft_memalloc.c", &part2);
	file_exsit("../libft/ft_memdel.c", &part2);
	file_exsit("../libft/ft_strnew.c", &part2);
	file_exsit("../libft/ft_strdel.c", &part2);
	file_exsit("../libft/ft_strclr.c", &part2);
	file_exsit("../libft/ft_striter.c", &part2);
	file_exsit("../libft/ft_striteri.c", &part2);
	file_exsit("../libft/ft_strmap.c", &part2);
	file_exsit("../libft/ft_strmapi.c", &part2);
	file_exsit("../libft/ft_strequ.c", &part2);
	file_exsit("../libft/ft_strnequ.c", &part2);
	file_exsit("../libft/ft_strsub.c", &part2);
	file_exsit("../libft/ft_strjoin.c", &part2);
	file_exsit("../libft/ft_strtrim.c", &part2);
	file_exsit("../libft/ft_strsplit.c", &part2);
	file_exsit("../libft/ft_itoa.c", &part2);
	file_exsit("../libft/ft_putchar.c", &part2);
	file_exsit("../libft/ft_putstr.c", &part2);
	file_exsit("../libft/ft_putendl.c", &part2);
	file_exsit("../libft/ft_putnbr.c", &part2);
	file_exsit("../libft/ft_putchar_fd.c", &part2);
	file_exsit("../libft/ft_putstr_fd.c", &part2);
	file_exsit("../libft/ft_putendl_fd.c", &part2);
	file_exsit("../libft/ft_putnbr_fd.c", &part2);
	print_line("Bonus!");
	file_exsit("../libft/ft_lstnew.c", &bonus);
	file_exsit("../libft/ft_lstdelone.c", &bonus);
	file_exsit("../libft/ft_lstdel.c", &bonus);
	file_exsit("../libft/ft_lstadd.c", &bonus);
	file_exsit("../libft/ft_lstiter.c", &bonus);
	file_exsit("../libft/ft_lstmap.c", &bonus);
	print_line(0);
	printf("Part 1 - Libc functions\t\t-> %.f%%\n", ((float)part1 / 28) * 100);
	printf("Part 2 - Additional functions\t-> %.f%%\n", ((float)part2 / 24) * 100);
	printf("Bonus\t\t\t\t-> %.f%%\n", ((float)bonus / 6) * 100);
}


