#ifndef LIB_H
#define LIB_H

#include <string.h>
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(long int n);
void	ft_putendl(char const *s);
void	ft_bzero(void *s, size_t n);
void	*memccpy(void *dest, const void *src, int c, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memset(void *s, int c, size_t n);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f) (char *));
void	ft_striteri(char *s, void (*f) (unsigned int, char *));
int		ft_isalnum(int n);
int		ft_isalpha(int n);
int		ft_isprint(int n);
int		ft_isdigit(int n);
int		ft_tolower(int n);
int		ft_toupper(int n);
int		ft_strlen(char *str);
int		ft_strdup(char *str);
char	*ft_strrev(char *str);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_itoa(long int n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnew(size_t size);
char	*ft_strncpy(char *dest, const char *src, int n);
char	*ft_strcpy(char *dest, char const *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
#endif
