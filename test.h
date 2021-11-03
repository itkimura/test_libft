/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:57:05 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/03 18:37:16 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	print_result(char *f_name, int result);

void	strlen_check(void);
int		strlen_test(void);
void	strdup_check(void);
int		strdup_test(void);
void	strcpy_check(void);
int		strcpy_test(void);
void	strncpy_check(void);
int		strncpy_test(void);
void	strcat_check(void);
int		strcat_test(void);
void	strncat_check(void);
int		strncat_test(void);
void	strstr_check(void);
int		strstr_test(void);
void	strnstr_check(void);
int		strnstr_test(void);
void	strcmp_check(void);
int		strcmp_test(void);
void	strncmp_check(void);
int		strncmp_test(void);
void	atoi_check(void);
int		atoi_test(void);

int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
