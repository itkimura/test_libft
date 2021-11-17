/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_exsit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:01:21 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/17 23:40:47 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	file_exsit(char *f_name)
{
	int	fd;

	ft_putstr(f_name + 9);
	fd = open(f_name, O_RDONLY);
	if (fd != -1)
	{
		close(fd);
		ft_putstr("\t:Submitted\n");
	}
	else
	{
		ft_putstr("\t:No file\n");
	}
}

void	submit_file(void)
{
	file_exsit("../libft/ft_memset.c");
	file_exsit("../libft/ft_bzero.c");
	file_exsit("../libft/ft_memcpy.c");
	file_exsit("../libft/ft_memccpy.c");
	file_exsit("../libft/ft_memmove.c");
	file_exsit("../libft/ft_memchr.c");
	file_exsit("../libft/ft_memcmp.c");
	file_exsit("../libft/ft_strlen.c");
	file_exsit("../libft/ft_strdup.c");
	file_exsit("../libft/ft_strcpy.c");
	file_exsit("../libft/ft_strncpy.c");
	file_exsit("../libft/ft_strcat.c");
	file_exsit("../libft/ft_strncat.c");
	file_exsit("../libft/ft_strlcat.c");
	file_exsit("../libft/ft_strchr.c");
	file_exsit("../libft/ft_strrchr.c");
	file_exsit("../libft/ft_strstr.c");
	file_exsit("../libft/ft_strnstr.c");
	file_exsit("../libft/ft_atoi.c");
	file_exsit("../libft/ft_isalpha.c");
	file_exsit("../libft/ft_isdigit.c");
	file_exsit("../libft/ft_isalnum.c");
	file_exsit("../libft/ft_isascii.c");
	file_exsit("../libft/ft_isprint.c");
	file_exsit("../libft/ft_toupper.c");
	file_exsit("../libft/ft_tolower.c");
	file_exsit("../libft/ft_memalloc.c");
	file_exsit("../libft/ft_memdel.c");
	file_exsit("../libft/ft_strnew.c");
	file_exsit("../libft/ft_strdel.c");
	file_exsit("../libft/ft_strclr.c");
	file_exsit("../libft/ft_striter.c");
	file_exsit("../libft/ft_striteri.c");
	file_exsit("../libft/ft_strmap.c");
	file_exsit("../libft/ft_strmapi.c");
	file_exsit("../libft/ft_strequ.c");
	file_exsit("../libft/ft_strnequ.c");
	file_exsit("../libft/ft_strsub.c");
	file_exsit("../libft/ft_strjoin.c");
	file_exsit("../libft/ft_strtrim.c");
	file_exsit("../libft/ft_strsplit.c");
	file_exsit("../libft/ft_itoa.c");
	file_exsit("../libft/ft_putchar.c");
	file_exsit("../libft/ft_putstr.c");
	file_exsit("../libft/ft_putendl.c");
	file_exsit("../libft/ft_putnbr.c");
	file_exsit("../libft/ft_putchar_fd.c");
	file_exsit("../libft/ft_putstr_fd.c");
	file_exsit("../libft/ft_putendl_fd.c");
	file_exsit("../libft/ft_putnbr_fd.c");
}


