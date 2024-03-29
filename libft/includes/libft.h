/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 18:29:10 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/06/02 18:39:45 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char c);
void				ft_putnbr(int nbr);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int nbr, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_bzero(void *s, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del) (void *, size_t));
void				*ft_memalloc(size_t size);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *b, int c, size_t len);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
char				*ft_strtrim(char const *s);
char				*ft_itoa(int nbr);
char				*ft_strrev(char *s);
char				*ft_strtrim_char(char const *s, char c);
char				*ft_strnew(size_t size);
char				*ft_strtrim(char const *s);
char				*ft_strtrim_char(char const *s, char c);
char				*ft_strtrim_all_char(char *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strcpy(char *s1, const char *s2);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strdup(const char *s);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
char				*ft_strncpy(char *s1, const char *s2, size_t len);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				**ft_strsplit(char const *s, char c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isspace(int n);
int					ft_isalpha(int c);
int					ft_nbrlen(int nbr);
int					ft_atoi(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
float				ft_powf(float nbr, float power);

t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
