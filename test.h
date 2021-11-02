/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:57:05 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/02 18:06:09 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	print_result(char *f_name, int result);
void	check_strlen(void);
int		test_strlen(void);
void	check_strdup(void);
int		test_strdup(void);
void	check_strcmp(void);
int		test_strcmp(void);
void	check_strncmp(void);
int		test_strncmp(void);
void	check_atoi(void);
int		test_atoi(void);
void	check_strcpy(void);
int		test_strcpy(void);

int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
char	*ft_strcpy(char *dst, const char *src);

#endif
