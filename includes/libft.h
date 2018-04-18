/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vliubko <vliubko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:45:48 by vliubko           #+#    #+#             */
/*   Updated: 2018/04/18 17:04:00 by vliubko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFF_SIZE 1024
# define WHITESPACE(x) x == '\t' || x == '\n' || x == ' '

typedef	struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef struct			s_list_gnl
{
	int					fd;
	char				*remain_line;
	struct s_list_gnl	*next;
}						t_list_gnl;

int						get_next_line(const int fd, char **line);
int						ft_atoi(const char *str);
void					ft_bzero(void *s, size_t n);
int						*ft_int_sort(int *tab, int length);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
int						ft_isspace(char c);
char					*ft_itoa(int n);
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void					ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_lstnew(void const *content, size_t content_size);
void					*ft_memalloc(size_t size);
void					*ft_memccpy(void *dst, const void *src, int c,
																size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					ft_memdel(void **ap);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memset(void *b, int c, size_t len);
void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);
void					ft_putendl(char const *s);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr(long long n);
void					ft_putnbr_fd(int n, int fd);
void					ft_putstr(char const *s);
void					ft_putstr_fd(char const *s, int fd);
int						ft_sqrt(int nb);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
void					ft_strclr(char *s);
size_t					ft_strlen(const char *s);
char					*ft_strdup(const char *src);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strncpy(char *dest, const char *src, size_t len);
char					*ft_strstr(const char *str, const char *to_find);
char					*ft_strnstr(const char *big, const char *lit,
																size_t len);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_toupper(int c);
int						ft_tolower(int c);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_striter(char *s, void (*f)(char*));
void					ft_striteri(char *s, void (*f)(unsigned int, char*));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
												char (*f)(unsigned int, char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s, unsigned int start,
																size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);
char					*ft_strrev(char *str);
void					ft_swap(int *a, int *b);
int						ft_count_elems(t_list *list, char **av, int switcher);
void					ft_free_2d_array(char **av);
size_t					ft_power(int n, int p);
char					*ft_strjoin_free(char *s1, char *s2, int free_both);
char					*ft_strchr_whitespace(const char *s);
char					**ft_strsplit_whitespaces(char const *s);
char					*ft_pathjoin(char *p1, char *p2);
void					ft_print_r(char **av);

#endif
