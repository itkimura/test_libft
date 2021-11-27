/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:57:05 by itkimura          #+#    #+#             */
/*   Updated: 2021/11/27 21:58:39 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	print_line(char *f_name);
void	print_result(char *f_name, int result);
void	file_exsit(char *f_name, int *n);
int		file_test(char *f_name);
int		file_check(char *f_name);
void	submit_file(void);

void	memset_check(void);
void		memset_test(void);
void	bzero_check(void);
void		bzero_test(void);
void	memcpy_check(void);
void		memcpy_test(void);
void	memccpy_check(void);
void	memccpy_test(void);
void	memmove_check(void);
void		memmove_test(void);
void	memchr_check(void);
void		memchr_test(void);
void	memcmp_check(void);
void		memcmp_test(void);
void	strlen_check(void);
void		strlen_test(void);
void	strdup_check(void);
void		strdup_test(void);
void	strcpy_check(void);
void		strcpy_test(void);
void	strncpy_check(void);
void		strncpy_test(void);
void	strcat_check(void);
void		strcat_test(void);
void	strncat_check(void);
void		strncat_test(void);
void	strlcat_check(void);
void		strlcat_test(void);
void	strchr_check(void);
void		strchr_test(void);
void	strrchr_check(void);
void		strrchr_test(void);
void	strstr_check(void);
void		strstr_test(void);
void	strnstr_check(void);
void		strnstr_test(void);
void	strcmp_check(void);
void		strcmp_test(void);
void	strncmp_check(void);
void		strncmp_test(void);
void	atoi_check(void);
void		atoi_test(void);
void	isalpha_check(void);
void		isalpha_test(void);
void	isdigit_check(void);
void		isdigit_test(void);
void	isalnum_check(void);
void		isalnum_test(void);
void	isascii_check(void);
void		isascii_test(void);
void	isprint_check(void);
void		isprint_test(void);
void	toupper_check(void);
void		toupper_test(void);
void	tolower_check(void);
void		tolower_test(void);

void	memalloc_check(void);
void		memalloc_test(void);
void	memdel_check(void);
void		memdel_test(void);
void	strnew_check(void);
void		strnew_test(void);


void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
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

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int nb);
#endif
