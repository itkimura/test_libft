/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:57:05 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/15 12:19:13 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	print_result(char *f_name, int result);

void	memset_check(void);
int		memset_test(void);
void	bzero_check(void);
int		bzero_test(void);
void	memcpy_check(void);
int		memcpy_test(void);
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
void	strlcat_check(void);
int		strlcat_test(void);
void	strchr_check(void);
int		strchr_test(void);
void	strrchr_check(void);
int		strrchr_test(void);
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
void	isalpha_check(void);
int		isalpha_test(void);
void	isdigit_check(void);
int		isdigit_test(void);
void	isalnum_check(void);
int		isalnum_test(void);
void	isascii_check(void);
int		isascii_test(void);
void	isprint_check(void);
int		isprint_test(void);
void	toupper_check(void);
int		toupper_test(void);
int		tolower_test(void);
void	tolower_check(void);

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
